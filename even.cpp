#include <iostream>

class Even {
    private:
        int a;
    public:
        Even() {
            this->a = 0;
        }
        
        void operator++(int) {
            this->a = this->a + 202;
        }
        friend std::ostream& operator<<(std::ostream& , const Even& );
        ~Even() {

        }
};

std::ostream& operator<<(std::ostream& stream, const Even& obj) {
    stream << obj.a;
    return stream;
}
int main() {
    Even s;
    std::cout << s << std::endl;
    s++;
    std::cout << s << std::endl;
    return 0;
}