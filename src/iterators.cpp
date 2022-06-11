#include "../algo/euler/euler.h"


/**
 * presentation: une range loop fait le travail mais les iterators peuvent etre interessant pour looper sur une unordered map par exemple
 */
void iterators() {
    std::unordered_map<std::string, int> map;
    map["Victor"] = 1;
    map["Coucou"] = 5;

    for (auto it = map.begin(); it != map.end(); ++it) {
        std::cout << it->first << it->second << std::endl;
    }

    // fait la meme chose en un peu plus propre
    for (const auto& kv: map) {
        auto &key = kv.first;
        auto &value = kv.second;

        std::cout << key << value << std::endl;
    }

    // fait la meme chose en ENCORE PLUS CLEANN OMGGGGGG c++ 17 c'est le besttttt
    for (auto [key, value]: map) {
        std::cout << key << value << std::endl;
    }
}