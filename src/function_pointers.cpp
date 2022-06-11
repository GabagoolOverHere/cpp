#include "../algo/euler/euler.h"


void PrintValue(int a) {
    std::cout << a << std::endl;
}

void ForEach(const std::vector<int> &values, void(*func)(int)) {
    for (int value: values)
        func(value);
}

void function_pointers() {
    std::vector<int> values = {1, 2, 3, 4, 5};
    auto it = std::find_if(values.begin(), values.end(), [](int value) { return value > 3; });

    std::cout << *it << std::endl;

    ForEach(values, PrintValue);
    ForEach(values, [](int value) { std::cout << value << std::endl; });
}
