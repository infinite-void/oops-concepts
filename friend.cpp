#include <iostream> 

class SomeClass {
    private:
        int a;

    public:
        SomeClass(int a) {
            this->a = a;
        }

        friend void Print(const SomeClass&);
};

void Print(const SomeClass& p) {
    std::cout << p.a << std::endl;
}

int main() {
    SomeClass a(67);
    Print(a);
    return 0;
}