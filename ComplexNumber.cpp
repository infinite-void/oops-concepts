#include <iostream>
#include <cmath>

class ComplexNumber {
    public:
        int real, imag;

        void Print() {
            if(imag > -1)
                std::cout << real << " +" << imag << "i" << std::endl;
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
        }

        double Magnitude() {
            return sqrt(real * real + imag * imag);
        }


};

int main(int argc, char* argv[]) {
    ComplexNumber a;
    a.real = 2;
    a.imag = 3;
    a.Print();
    a.PrintConjugate();
    std::cout << "CONJUGATE" << std::endl;
    a.ApplyConjugate();
    a.Print();
    a.PrintConjugate();

    std::cout << a.Magnitude() << std::endl;
    return 0;
}
