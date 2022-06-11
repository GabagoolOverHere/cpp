#include "euler.h"

void euler2() {
    Timer t;
    std::vector<int> fibo = {1, 2};
    int fiboLast = 3;
    int evenSum = 2;

    while (fiboLast < 4000000) {
        int next = fibo[fibo.size() - 1] + fibo[fibo.size() - 2];
        fibo.push_back(next);
        fiboLast = next;
        if (next % 2 == 0) evenSum += next;
    }

    std::cout << evenSum << std::endl;
}
