#include "euler/euler.h"

void ReverseString(std::string &string) {
    for (auto ptr = string.rbegin(); ptr != string.rend(); ++ptr) {
        std::cout << *ptr;
    }
}

int MajCount(const std::string &string) {
    int majCount = 0;
    for (auto ptr = string.begin(); ptr != string.end(); ptr++) {
        if (std::isupper(*ptr))
            majCount++;
    }

    return majCount;
}

std::vector<std::string> SplitString(std::string &string, const char &delimiter) {
    size_t start = 0;
    size_t end = string.find_first_of(delimiter);

    std::vector<std::string> v;
    while (end <= std::string::npos) {
        v.emplace_back(string.substr(start, end - start));
        if (end == std::string::npos)
            break;
        start = end + 1;
        end = string.find_first_of(delimiter, start);
    }

    return v;
}

std::string GreatestWord(const std::vector<std::string> &v) {
    std::string greatest;
    for (const std::string &string: v)
        if (string.length() > greatest.length())
            greatest = string;

    return greatest;
}

std::vector<std::string> VectorsIntersection(const std::vector<std::string> &v1, const std::vector<std::string> &v2) {
    std::vector<std::string> result;
    std::set_intersection(
            v1.begin(), v1.end(),
            v2.begin(), v2.end(),
            std::back_inserter(result)
    );

    return result;
}

void easy_string_operation() {
    std::cout << "-------------------------\n";

    std::string str_1 = "Coucou cA va la Formiche?";
    std::string str_2 = "Coucou ca va bien merciiii";
    ReverseString(str_1);

    std::cout << "-------------------------\n";

    std::cout << MajCount(str_1) << std::endl;

    std::vector<std::string> v_String_1 = SplitString(str_1, ' ');
    std::vector<std::string> v_String_2 = SplitString(str_2, ' ');

    for (const std::string &s: v_String_1)
        std::cout << s << "\n";

    std::cout << "-------------------------\n";

    std::cout << GreatestWord(v_String_1) << std::endl;

    std::cout << "-------------------------\n";

    std::vector<std::string> res = VectorsIntersection(v_String_1, v_String_2);

    for (const std::string &s: res)
        std::cout << s << "\n";

    std::cout << "-------------------------\n";
}
