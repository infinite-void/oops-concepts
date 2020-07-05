#include <iostream>

class A {
    public:
        int p = 100;
    protected:
        int q = 200;
    private:
        int r = 300;
};
class B : public A {
    public:
        int x = 400; 
    protected:
        int y = 500; // p,q
    private:
        int z = 600; 
};
class C : public B, private A {
    public:
    void print() { 
        std::cout << p << q << x << y << std::endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    c.print();
    std::cout << sizeof(c) << std::endl;
    //std::cout << b.p << std::endl;
    return 0;
}