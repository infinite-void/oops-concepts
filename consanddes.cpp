#include <iostream>

class SomeClass {
    private:
        int a;
    public:
        static int number;
    public:
        SomeClass() {
            this->a = 0;
            std::cout << "Default" << std::endl;
            number++;
        }

        SomeClass(int d) {
            this->a = d;
            std::cout << "Parameterized" << std::endl;
            number++;
        }

        SomeClass(const SomeClass& other) {
            this->a = other.a;
            std::cout << "Copy" << std::endl;
            number++;
        }

        ~SomeClass() {
            std::cout << "desctructor called" << std::endl;
        }
};
int SomeClass::number;
int main() {
    SomeClass::number = 0;
    SomeClass* q;
    {
        SomeClass *p = new SomeClass(67);
        q = p;
    }
    SomeClass a;
    SomeClass b(45);
    SomeClass c(b);
    
    

    std::cout << SomeClass::number << std::endl;
    delete q;
    
    return 0;
}