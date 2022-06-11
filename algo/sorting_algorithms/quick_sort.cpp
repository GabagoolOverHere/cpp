#include "../euler/euler.h"

std::vector<int> QuickSort(std::vector<int> &v, const int &start, const int &end) {
    if (end - start == 1 && v[start] > v[end]) {
        std::swap(v[start], v[end]);

        return v;
    }
    int last = v[end - 1];
    int small_count = 0;
    int middle = std::div(end - 1, 2).quot;
    for (int i = start; i < end - 1; ++i) {
        if (v[i] < last && i != small_count) {
            int small = v[i];
            for (int j = i - 1; j >= small_count; --j)
                v[j + 1] = v[j];

            v[small_count] = small;
            small_count++;
        }
    }
    if (!small_count)
        return QuickSort(v, start, end - 1);
    for (int k = end - 2; k >= middle; --k)
        v[k + 1] = v[k];

    v[middle] = last;

    QuickSort(v, 0, middle);
    QuickSort(v, middle + 1, v.size());

    return v;
}

void quick_sort() {
    std::vector<int> v = {8, 3, 7, 9, 1, 4};
    std::vector<int> sorted = QuickSort(v, 0, v.size());

    for (const int &i: sorted)
        std::cout << i << std::endl;
}