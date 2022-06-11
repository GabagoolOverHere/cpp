#include "../algo/euler/euler.h"

// Permet de passer de ca:
void PrintNulle(const int &value) {
    std::cout << value << std::endl;
}

void PrintNulle(const std::string &value) {
    std::cout << value << std::endl;
}

// A ca:
template<typename T>
void Print(T value) {
    std::cout << value << std::endl;
}

// Permet de creer un tableau dans le stack avec le type et la taille qu'on veut
template<typename T, int N>
class Array {
private:
    int m_Array[N];
public:
    int GetSize() const { return N; }
};

void templates() {
    PrintNulle(5);
    PrintNulle("hello");

    Print(5);
    Print("hello");

    Array<int, 7> a;
    std::cout << a.GetSize() << std::endl;
}
