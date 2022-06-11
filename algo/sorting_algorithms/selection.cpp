#include "../euler/euler.h"

std::vector<int> SelectionSort(std::vector<int> &v, const int &start, const int &end) {
    if (end - start == 0)
        return v;

    int smallest = v[start];
    int smallest_i = start;
    for (int i = start + 1; i < end; ++i)
        if (v[i] < smallest){
            smallest_i = i;
            smallest = v[smallest_i];
        }

    int first = v[start];
    v[start] = v[smallest_i];
    v[smallest_i] = first;

    return SelectionSort(v, start + 1, end);
}

void selection() {
    std::vector<int> v = {8, 5, 2, 6, 1, 8, 12, 78, 45, 1, 4};
    std::vector<int> sorted = SelectionSort(v, 0, v.size());

    for (const int &i: sorted)
        std::cout << i << std::endl;
}