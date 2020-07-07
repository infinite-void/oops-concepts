#include <iostream>

class Gadget {
    public:
        virtual int getType() = 0; 
};

class Mechanical : public Gadget {
    public:
        int getType() {
            return 1;
        }
};
class Electronic : public Gadget {
    public:
        int getType() {
            return 2;
        }
};

void printType(Gadget* obj) {
    if(obj->getType() == 1) 
        std::cout << "it is a mechanical gadget" << std::endl;
    else 
    
        std::cout << "it is a electronic gadget" << std::endl;
}

int main() {
    Mechanical q;
    Electronic p;
    printType(&p);
    return 0;
}