#include "../algo/euler/euler.h"

struct Entity {
    int x, y;

    Entity(int x, int y) : x(x), y(y) {}

    int* GetPosition(){
        return &x;
    }
};

void type_punning() {
    Entity e = {1, 2};
    int* position = (int*)&e; // conversion du struct en array
    int* positions = e.GetPosition(); // permet de sortir x et y sous la forme d'un array sans jamais faire de copie

    std::cout << position[0] << ", " << position[1] << std::endl;

    std::cout << *position << std::endl;
}
