#include "../algo/euler/euler.h"

class Singleton {
private:
    Singleton() {}

    Singleton(const Singleton &) = delete; // s'assurer qu'aucune copie n'est faite

    static Singleton s_Instance;
public:
    static Singleton &Get() {
        return s_Instance;
    }
};


class Random {
private:
    Random() = default;

    Random(const Random &) = delete; // s'assurer qu'aucune copie n'est faite

    static Random s_Instance;

    float m_RandomGenerator = 0.5f;
public:
    static Random &Get() {
        return s_Instance;
    }

    float Float() { return m_RandomGenerator; }
};

Random Random::s_Instance;

void singletons() {
    Singleton &instance = Singleton::Get();
    Singleton::Get();

    Random &random = Random::Get();
    float randN = random.Float();
}
