#include "euler/euler.h"

void delete_doublons() {
    std::vector<std::string> v = {"coucou", "je", "m'appelle", "victor", "coucou"};

    // methode 1: creer un set => plus rapide quand bcp de donnees
    std::set<std::string> s(v.begin(), v.end());

    // methode 2: utliser erase et unique => plus rapide quand peu de donnees
    v.erase(std::unique(v.begin(), v.end()), v.end());

    for (const std::string &str: s)
        std::cout << str << "\n";
}