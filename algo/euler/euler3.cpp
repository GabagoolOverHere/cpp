#include "euler.h"

long FindGreatestPrimeFactor(long x) {
    long max = 0;
    while (x % 2 == 0) {
        max = 2;
        x /= 2;
    }

    while (x % 3 == 0) {
        max = 3;
        x /= 3;
    }

    for (int i = 5; i < sqrt(x); i += 6) {
        while (x % i == 0) {
            max = i;
            x /= i;
        }
        while (x % (i + 2) == 0) {
            max = i + 2;
            x = x / (i + 2);
        }
    }

    if (x > 4)
        max = x;

    return max;
}

void euler3() {
    Timer t;
    std::cout << FindGreatestPrimeFactor(600851475143) << std::endl;
}
