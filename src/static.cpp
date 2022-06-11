#include "../algo/euler/euler.h"

class Singleton {
public:
    static Singleton& Get() {
        static Singleton instance;
        return instance;
    }

    Singleton() { std::cout << "Copied" << std::endl; }

    void Hello() { std::cout << "Coucou" << std::endl; }
};

void statics() {
    Singleton::Get().Hello();
}