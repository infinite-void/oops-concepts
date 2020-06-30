#include <iostream>


//3 access specfiers
// public 
// private
// protected

class This{
    private:
        int a;

    public: 
        void assign(int a) {
            this->a = a;
            this->print();
        }
    private:
        void print() {
            std::cout << this->a << std::endl;
        }
};

int main() {
    This* p = nullptr;
    This* q = nullptr;

    p = new This();
    q = new This();
    if(!p) {
        std::cerr << "ERROR" << std::endl;
        return -1;
    }

    if (!q) {
        std::cerr << "ERROR" << std::endl;
        return -1;
    }
    
    p->assign(5);
    q->assign(10);
    

    

    return 0;
}