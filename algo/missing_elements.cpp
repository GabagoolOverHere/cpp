#include "euler/euler.h"

std::vector<int> MissingElements(const std::vector<int> &v, const int &begin, const int &end) {
    std::vector<int> range(end - begin);
    std::iota(range.begin(), range.end(), begin);

    std::vector<int> result;

    std::set_difference(
            range.begin(), range.end(),
            v.begin(), v.end(),
            std::back_inserter(result)
    );

    return result;
}

void missing_elements() {
    std::vector<int> v = {1, 2, 3, 6, 7};
    std::vector<int> res = MissingElements(v, 0, 10);

    if (res.size() > 0)
        for (const int &r: res)
            std::cout << r << "\n";
    else
        std::cout << "No difference!" << std::endl;
}