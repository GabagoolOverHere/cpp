#include "../algo/euler/euler.h"

class Entity {
public:
    virtual void PrintName(){}

};

class Player : public Entity {

};

class Enemy : public Entity {

};

void dynamic_casting() {
    Player *player = new Player();
    Enemy* enemy = new Enemy();
    Entity* e = player; // marche grace au cast implicite
    // Player* p = e; ne fonctionnera pas

    // Pour eviter les soucis on peut utiliser un dynamic cast qui controle a notre place moyennant un overhead (cout en performance)
    Player* p = dynamic_cast<Player*>(enemy);
    Player* p1 = dynamic_cast<Player*>(e);
}
