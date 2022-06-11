#include "../algo/euler/euler.h"

uint32_t s_AllocCount = 0;

void PrintName(const std::string &name) {
    std::cout << name << std::endl;
}

void string_opti() {
    /// Facon non opti
    std::string name = "Victor Martindaa"; // 1 allocation dans le heap si la string fait 16 char ou + (ca depend de la config)
    std::string firstname = name.substr(0, 5); // + 1 avant le SSO
    std::string lastname = name.substr(6, 11); // + 1 avant le SSO

    /// Facon opti: string_view
    std::string_view firstName(name.c_str(), 3);
    std::string_view lastName(name.c_str() + 6, 11);

    std::cout << s_AllocCount << " allocations" << std::endl;
    PrintName(name);
}