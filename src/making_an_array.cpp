#include "../algo/euler/euler.h"

template<typename T, size_t N>
class Array {
private:
    T m_Data[N];
public:
    size_t Size() const { return N; }

    T &operator[](size_t index) { return m_Data[index]; }

    T *Data() { return m_Data; }
};

void making_an_array() {
    /**
     * Stack arrays: size have to be specified at compiled time
     */
    int stackArray[5];

    /**
     * Heap arrays: you can dynamically allocate size
     */
    int size = 5;
    int *heapArray = new int[size];

    /**
     * Standard Library array
     */
    std::array<int, 5> collection{};
    collection.size();
    for (int i: collection) {}

    /**
     * Our custom array class
     */
    Array<int, 5> arr;
    memset(&arr[0], 0, arr.Size() * sizeof(int));

    arr[0] = 1;
    arr[3] = 5;
    for (size_t i = 0; i < arr.Size(); ++i) {
        std::cout << arr[i] << "\n";
    }
}
