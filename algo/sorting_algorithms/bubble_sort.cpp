#include "../euler/euler.h"

std::vector<int> BubbleSort(std::vector<int> &v) {
    for (int i = 0; i < v.size() - 1; ++i) {
        if (v[i] > v[i + 1]) {
            int first = v[i];
            v[i] = v[i + 1];
            v[i + 1] = first;
            return BubbleSort(v);
        }
    }
    return v;
}

void bubble() {
    std::vector<int> v = {1, 2, 5, 4, 2, 3, 7, 3, 4, 78, 12};
    std::vector<int> sorted = BubbleSort(v);

    for (const int &i: sorted)
        std::cout << i << std::endl;
}