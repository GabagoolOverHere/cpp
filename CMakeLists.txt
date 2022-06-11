cmake_minimum_required(VERSION 3.22)
project(CPP)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

add_executable(CPP src/copy.cpp src/arrow_operator.cpp src/vectors.cpp src/static.cpp src/templates.cpp src/macros.cpp src/function_pointers.cpp src/threads_and_chrono.cpp src/test.cpp src/type_punning.cpp src/unions.cpp src/virtual_destructors.cpp src/casting.cpp src/structured_bindings.cpp src/variants.cpp algo/euler/euler1.cpp algo/euler/euler2.cpp algo/euler/euler.h algo/euler/euler3.cpp algo/euler/euler4.cpp src/string_optimization.cpp src/singletons.cpp algo/easy_string_operations.cpp algo/monotonic_datas.cpp algo/delete_doublons.cpp algo/missing_elements.cpp algo/sorting_algorithms/selection.cpp src/iterators.cpp algo/sorting_algorithms/bubble_sort.cpp algo/sorting_algorithms/quick_sort.cpp algo/search_algorithms/linear_search.cpp algo/search_algorithms/dichotomic_search.cpp src/track_memory_allocation.cpp src/parameters_evaluation_order.cpp src/move_semantics.cpp src/making_an_array.cpp)
