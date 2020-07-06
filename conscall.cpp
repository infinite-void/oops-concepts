#include <iostream>

class A {
    public:
        A() {
            std::cout << "constructor of base" << std::endl;
        }
        ~A() {
            std::cout << "Base destructor" << std::endl;
        }
};
class B : private A {
    public:
        B() {
            std::cout << "inter constructor" << std::endl;
        }
        ~B() {
            std::cout << "inter destructor" << std::endl;
        }
};
class C : public B {
    public:
        C() {
            std::cout << "final cons" << std::endl;
        }
        ~C() {
            std::cout << "final des" << std::endl;
        }
};
int main() {
    C c;
    return 0;
}


