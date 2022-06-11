#include "../algo/euler/euler.h"

/// Permet d'utiliser des variables ayant plusieurs types a la fois

void variants(){
    std::variant<std::string, int> data;
    data = "Victor";
    std::cout << std::get<std::string>(data) << "\n";


    data = 2;
    std::cout << std::get<int>(data) << "\n";

    // Gerer les eventuelles erreurs
    data.index(); // nous renvoi 0 si c'est une string ou 1 si c'est un int
    auto value = std::get_if<std::string>(&data); // nous renverra un nullptr si data n'est pas une string

    std::cout << value << std::endl;
}
