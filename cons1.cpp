#include <iostream> 

class ComplexNumber {
    private:
        int real, imag;
        int* rubbish;

    public: 
        ComplexNumber() =  delete;
        /*ComplexNumber() {
            this->real = 0;
            this->imag = 0;
            this->rubbish = new int;
            *(this->rubbish) = 99;
            std::cout << "Constructor without parameters" << std::endl;
        }*/

        ComplexNumber(int real, int imag) {
            this->real = real;
            this->imag = imag;
            this->rubbish = new int;
            std::cout << "Constructor with parameters" << std::endl;
        }

        ComplexNumber(const ComplexNumber& other) {

        }

        void Print() {
            if (this->imag > -1)
                std::cout << this->real << " +" << this->imag << "i" << std::endl;
            else
                std::cout << this->real << " " << this->imag << "i" << std::endl;
        }

        void Print(int n) {
            for(int i = 0; i < n; i++) {
                if (this->imag > -1)
                    std::cout << this->real << " +" << this->imag << "i" << std::endl;
                else
                    std::cout << this->real << " " << this->imag << "i" << std::endl;
            }
        }

        ~ComplexNumber() {
            std::cout << "Destroyed the instance" << std::endl;
            delete this->rubbish;
        }
};

int main() {

    ComplexNumber b(6, 7);
    {
        ComplexNumber c(10, 30);
        c.Print();
    }
    b.Print();
    b.Print(5);
    b.Print(5);
    return 0;
}