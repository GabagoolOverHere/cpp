#include "../algo/euler/euler.h"

class String {
private:
    uint32_t m_Size;
    char *m_Data;
public:
    String() = default;

    String(const char *string) {
        printf("Created\n");
        m_Size = strlen(string);
        m_Data = new char[m_Size];
        memcpy(m_Data, string, m_Size);
    }

    String(const String &other) {
        printf("Copied\n");
        m_Size = other.m_Size;
        m_Data = new char[m_Size];
        memcpy(m_Data, other.m_Data, m_Size);
    }

    String(String &&other) noexcept {
        printf("Moved\n");
        m_Size = other.m_Size;
        m_Data = other.m_Data;

        other.m_Data = nullptr;
        other.m_Size = 0;
    }

    String &operator=(String &&other) noexcept {
        printf("Moved\n");
        if (this != &other) {
            delete[] m_Data;
            m_Size = other.m_Size;
            m_Data = other.m_Data;

            other.m_Data = nullptr;
            other.m_Size = 0;
        }

        return *this;
    }

    ~String() {
        printf("Deleted\n");
        delete[] m_Data;
    }

    void Print() {
        printf("%.*s\n", (int) m_Size, m_Data);
    }
};

class Entity {
private:
    String m_Name;
public:
    explicit Entity(const String &name) : m_Name(name) {}

    explicit Entity(String &&name) : m_Name(std::move(name)) {}

    void PrintName() {
        m_Name.Print();
    }
};

void move_semantics() {
    String str("Gerard");
    String dest = std::move(str);

    Entity e("Victor");
    e.PrintName();
}