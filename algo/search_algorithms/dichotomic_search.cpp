#include "../euler/euler.h"

/**
 * Ne fonctionne que sur les liste classees
 */
int DichotomicSearch(const std::vector<int> &v, const int &x, const int &start, const int &end) {
    if (end - start == 1) {
        if (v[start] == x)
            return start;
        if (v[end] == x)
            return end;
        return -1;
    }
    int middle_i = start + std::div(end - start, 2).quot;

    if (x == v[middle_i])
        return middle_i;

    if (x > v[middle_i])
        return DichotomicSearch(v, x, middle_i + 1, end);
    return DichotomicSearch(v, x, 0, middle_i);
}

void dichotomic() {
    std::vector<int> v = {1, 2, 3, 7, 9, 13, 23, 34, 56, 78};
    std::cout << DichotomicSearch(v, 34, 0, v.size() - 1);
}
