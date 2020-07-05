#include <iostream>

class String {
    private:
        char* a;

    public:
        String(const char* b) {
            a = new char[strlen(b) + 1];

            memcpy(a, b, strlen(b));
            a[strlen(b)] = '\0';
        }
        void print() {
            std::cout << a << std::endl;
        }
        friend std::ostream &operator<<(std::ostream&, const String&);

        char& operator[](const int index) {
            return a[index];
        }
        ~String() {
            delete[] a;
        }
};

std::ostream& operator<<(std::ostream& stream,  const String& str) {
    stream << str.a;
    return stream;
}

int main() {
    String str("heltukyiljkmlmlo");
    std::cout << str << std::endl; 
    std::cout << str[10] << std::endl;

    //stdout
    //stdin
    return 0;
}