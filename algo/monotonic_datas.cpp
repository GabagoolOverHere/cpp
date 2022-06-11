#include "euler/euler.h"

bool IsMonotonic(const std::vector<int> &v) {
    for (int i = 0; i < v.size(); ++i) {
        if (v[i + 1] < v[i])
            return false;
    }
    return true;
}

void monotonic() {
    std::vector<int> v_1 = {1, 2, 3, 4, 5, 5, 5, 6, 7, 8};
    std::vector<int> v_2 = {1, 2, 3, 4, 5, 4, 5, 6, 7, 8};

    std::cout << IsMonotonic(v_1) << std::endl;
    std::cout << IsMonotonic(v_2) << std::endl;
}
