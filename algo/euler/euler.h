#pragma once

#include <iostream>
#include <vector>
#include <chrono>
#include <optional>
#include <algorithm>
#include <future>
#include <mutex>
#include <string>
#include <numeric>
#include <cmath>
#include <memory>
#include <variant>
#include <cstring>
#include <set>
#include <list>
#include <sstream>


class Timer {
private:
    std::chrono::time_point<std::chrono::high_resolution_clock> m_Start;
public:
    Timer() {
        m_Start = std::chrono::high_resolution_clock::now();
    }

    ~Timer() {
        std::chrono::duration duration = std::chrono::high_resolution_clock::now() - m_Start;
        std::cout << duration.count() << std::endl;
    }
};

