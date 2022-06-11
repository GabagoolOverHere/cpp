#include "../euler/euler.h"

int LinearSearch(const std::vector<int> &v, const int &x) {
    Timer t;
    for (int i = 0; i < v.size(); ++i)
        if (v[i] == x)
            return i;
    return -1;
}

int LinearSearchBranchless(const std::vector<int> &v, const int &x) {
    Timer t;
    int is = 0;
    for (int i = 0; i < v.size(); ++i)
        is += i * (v[i] == x);
    return is;
}

void linear_search() {
    std::vector<int> v = {8, 3, 7, 9, 1, 4};
    std::cout << LinearSearch(v, 7) << std::endl;
    std::cout << LinearSearchBranchless(v, 7) << std::endl;
}