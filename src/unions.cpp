#include "../algo/euler/euler.h"

// Comment utiliser PrintVector2 avec un Vector4 ? Apres tout 1 Vector4 est plus ou moins 2 Vector2

struct Vector2 {
    float x, y;
};

struct Vector4 {
    // float x, y, z, w;

    union {
        struct {
            float x, y, z, w;
        };
        struct {
            Vector2 a, b;
        };
    };

    // Une facon de le faire
    Vector2 &GetA() {
        return *(Vector2 *) &x;
    }
};

void PrintVector2(const Vector2 &vector) {
    std::cout << vector.x << ", " << vector.y << std::endl;
}

void unions() {
    Vector4 vector = {1.2f, 2.3f, 4.5f, 6.7f};
    PrintVector2(vector.a);
    PrintVector2(vector.b);
    vector.z = 500.0f;
    PrintVector2(vector.a);
    PrintVector2(vector.b);
}
