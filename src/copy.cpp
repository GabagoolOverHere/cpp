#include "../algo/euler/euler.h"

class String {
private:
    char *m_Buffer;
    unsigned int m_Size;
public:
    String(const char *string) {
        m_Size = strlen(string);
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, string, m_Size);
    }

    String(const String &other)
            : m_Size(other.m_Size) {
        m_Buffer = new char[m_Size + 1];
        memcpy(m_Buffer, other.m_Buffer, m_Size);
    }

    ~String() {
        delete[] m_Buffer;
    }

    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string) {
    stream << string.m_Buffer;
    return stream;
}

void copy() {
    String str = "Victor";
    std::cout << str << std::endl;
}
