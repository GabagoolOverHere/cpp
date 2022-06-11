#include "../algo/euler/euler.h"

class Entity {
public:
    void Print() const { std::cout << "Hello" << std::endl; }
};

class ScopedPtr {
private:
    Entity *m_Ptr;
public:
    ScopedPtr(Entity *e) {
        std::cout << "Created" << std::endl;
        m_Ptr = e;
    }

    ~ScopedPtr() {
        std::cout << "Destroyed" << std::endl;
        delete m_Ptr;
    }

    const Entity *operator->() const {
        return m_Ptr;
    }
};

struct Vector3 {
    float x, y, z;
};


void arrow() {
    ScopedPtr ptr = new Entity;
    ptr->Print();

    /**
     * - Cast 0 into an valid Vector3 address (pointer).
     * - Returns x's address (remember the Vector3 address is 0, so x's address (the first member of Vector3) should be also 0).
     * - Cast this address into long because in 64 bits pointers are 8 bytes long.
     */
    int offset = (long)&((Vector3*) nullptr)->y;
    std::cout << offset << std::endl;
}