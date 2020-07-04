#include <iostream>

class Integer {
    private:
        int a;
    public:
        Integer() {
            this->a = 0;
        }
        Integer(int a) {
            this->a = a;
        }
        Integer(const Integer& other) {
            this->a = other.a;
        }

        int operator+(const Integer& other) {
            return this->a + other.a;
        }

        int operator+(const int value) {
            return this->a + value;
        }

        friend int operator+(const int, const Integer&);

        ~Integer() {

        }
};

int operator+(const int value, const Integer& a) {
    return value + a.a;
}

int main() {
    Integer a(101);
    Integer b(56);
    std::cout << 567 + a << std::endl;
    return 0;
}