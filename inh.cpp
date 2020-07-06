#include <iostream>

class Base {
    public:
        int a = 17; //accessed using `this` inside base class and 
                    // Base:: has to be used to access outside base class
};
class Derived : public Base {        
    public:
        int b = 70;
        int a = 99;   //accessed with 'this' pointer 
    Derived() {
        Base::a = 45;
        this->a = 567;
    }
};

int main() {
    
    Derived der;
    Base base;
    std::cout << der.b << " " << der.a << " " << der.Base::a << std::endl;
    std::cout << base.a << std::endl;
    std::cout << sizeof(base) << " " << sizeof(der) <<std::endl;
    return 0;
}