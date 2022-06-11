#include "../algo/euler/euler.h"

std::tuple<std::string, int> CreatePerson() {
    return {"Victor", 29};
}

/// Permet de gerer des fonctions qui retournent plusieurs choses

void stuctured_bindings() {
    std::tuple<std::string, int> person = CreatePerson(); // plutot utiliser auto ici mais bon...

    // 1ere technique
    std::string name = std::get<0>(person);
    int age = std::get<1>(person);

    std::cout << name << ", " << age << std::endl;

    // 2eme techique un peu mieux
    std::tie(name, age) = CreatePerson();

    std::cout << name << ", " << age << std::endl;

    // 3eme technique utilisant le structure binding (c++ 17 et +)
    auto[nameP, ageP] = CreatePerson();

    std::cout << nameP << ", " << ageP << std::endl;
}
