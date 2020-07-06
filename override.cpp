#include <iostream>

class Animals {
    public:
        virtual void Print() {
            std::cout << "this is an animal" << std::endl;
        }
};

class Endangered : public Animals {
    public:
        void Print()  {
            std::cout << "endangered animal" << std::endl;
        }
};

class Extinct : public Animals {
    public:
};
void function(Animals* p) {
    p->Print();
}

int main(int args, char* argv[]) {
    
    Animals* p = new Endangered();
    Animals* q = new Extinct();
    function(p);
    function(q);
    //Endangered* q = new Endangered();
    
    //q->Print();
    return 0;
}