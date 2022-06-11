#include "../algo/euler/euler.h"

/**
 * Argument Evaluation Order
 */
void Printsum(int a, int b) {
    std::cout << a << " + " << b << " = " << (a + b) << std::endl;
}
 
void paramter_evaluation_order() {
    int value = 0;
    Printsum(value++, value++); // undefined behaviour
}
