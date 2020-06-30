#include <iostream>
#include <cmath>
//'this' is a pointer in cpp
//'this' points to the specific class instance inside which it is called.
class ComplexNumber {
    public:
        int real, imag;

        void Print() {
            if(imag > -1)
                std::cout << this->real << " +" << this->imag << "i" << std::endl;
            else 
                std::cout << real << " " << imag << "i" << std::endl;
            
        }

        void PrintConjugate() {
            std::cout << real << " ";
            if(imag <= 0)
                std::cout << "+" << -1 * imag << "i" << std::endl;
            else
                std::cout << -1* imag << "i" << std::endl;
        }

        void ApplyConjugate() {
            imag = -1 * imag;

            this->Print();
        }

        double Magnitude() {
            return sqrt(real * real + imag * imag);
        }


};



int main(int argc, char* argv[]) {
    ComplexNumber* a = nullptr;
    ComplexNumber* b = nullptr;

    a = new ComplexNumber();
    b = new ComplexNumber();

    if(!a) {
        std::cerr << "ERROR: Error in get a class instance" << std::endl;
        return -1;
    }

    if(!b) {
        std::cerr << "ERROR: Error in get a class instance" << std::endl;
        return -1;
    }
    a->real = 2;
    a->imag = 3;
    a->ApplyConjugate();
   

    //std::cout << a->Magnitude() << std::endl;
    return 0;
}
