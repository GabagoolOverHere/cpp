#include "../algo/euler/euler.h"

struct Vertex {
    float x, y, z;

    Vertex(float x, float y, float z) : x(x), y(y), z(z) {}

    Vertex(const Vertex &other) : x(other.x), y(other.y), z(other.z) {
        std::cout << "Copied" << std::endl;
    }
};

std::ostream &operator<<(std::ostream &stream, const Vertex &vertex) {
    stream << vertex.x << vertex.y << vertex.z;
    return stream;
}

void vectors() {
    std::vector<Vertex> vertices;

    // 1er step d'optimisation: reserver l'espace
    vertices.reserve(3);

    // 2eme step d'optimisation: utiliser emplace_back au lieu de push_back
    // pour que la classe soit construite directement dans le vector
    vertices.emplace_back(1, 2, 3);
    vertices.emplace_back(4, 5, 6);
    vertices.emplace_back(7, 8, 9);

    for (const Vertex &v: vertices)
        std::cout << v << std::endl;

    vertices.erase(vertices.begin() + 1);

    for (const Vertex &v: vertices)
        std::cout << v << std::endl;

}
