#include <iostream>

class ComplexNumber {
private:
    int *real, *imag;

public:

    ComplexNumber() {
            this->real = new int;
            *(this->real) = 0;
            this->imag = new int;
            *(this->imag) = 0;
    }

    ComplexNumber(int real, int imag)
    {
        this->imag = new int; this->real = new int;
        *(this->real) = real;
        *(this->imag) = imag;
    }

    ComplexNumber(const ComplexNumber& other) {
        this->imag = new int;
        this->real = new int;
        *(this->real) = *(other.real);
        *(this->imag) = *(other.imag);
    }


    void Print()
    {
        if (*(this->imag) > -1)
            std::cout << *(this->real) << " +" << *(this->imag) << "i" << std::endl;
        else
            std::cout << *(this->real) << " " << *(this->imag) << "i" << std::endl;
    }

    ~ComplexNumber() {
        delete this->real;
        delete this->imag;
    }
};

int main() {
    ComplexNumber x(55, 66);
    {
        ComplexNumber copy_x(x);
    }
    x.Print();
    
    return 0;
}