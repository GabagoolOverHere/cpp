#include "../algo/euler/euler.h"

// Permet d'activer / desactiver le logging en fonction du mode (debug ou release)
#if PR_DEBUG == 1
#define LOG(x) std::cout << x << std::endl
#else
#define LOG(x)
#endif

void macros() {
    LOG("Hello");
    auto a = 5;
}
