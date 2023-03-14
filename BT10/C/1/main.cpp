#include <iostream>
#include <cstring>

class String {
private:
    int n;
    char* str;
public:
    // Constructor
    String(const char* s) {
        n = strlen(s);
        str = new char[n+1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Print function
    void print() const {
        std::cout << str << std::endl;
    }

    // Append function
    void append(const char* s) {
        int m = strlen(s);
        char* temp = new char[n + m + 1];
        strcpy(temp, str);
        strcpy(temp + n, s);
        delete[] str;
        str = temp;
        n += m;
    }
};

int main() {
    String s("Hello");
    s.print(); // output: Hello
    s.append(" world!");
    s.print(); // output: Hello world!
    return 0;
}
