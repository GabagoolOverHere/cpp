#include "../algo/euler/euler.h"

static bool s_Finished = false;

void DoWork() {
    using namespace std::literals::chrono_literals;

    while (!s_Finished) {
        std::cout << "Working..." << std::endl;
        std::this_thread::sleep_for(1s);
    }

}

void Function() {
    Timer t;
    for (int i = 0; i < 100; ++i)
        std::cout << "Hello\n"; // plus rapide que std::endl apparemment
}

void threads_and_chrono() {
    Function();
    std::thread worker(DoWork);

    std::cin.get();
    s_Finished = true;

    worker.join();
    std::cout << "Done!" << std::endl;

    // Version fastidieuse de chrono
    using namespace std::literals::chrono_literals;

    auto start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(1s);
    auto end = std::chrono::high_resolution_clock::now();

    std::chrono::duration<float> duration = end - start;

    std::cout << duration.count() << std::endl;
    std::cin.get();
}
