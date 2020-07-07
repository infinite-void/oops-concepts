#include <iostream>
#include <fstream>

class Object {
    public: 
        int a = 5;
};

std::ostream& operator<<(std::ostream& stream, const Object& o) {
    stream << o.a;
    return stream;
}
int main() {
        Object o;
        std::cout << o;
        return 0;
}


