#include <iostream>

void function() {

}

namespace s {
    void function() {
        std::cout << "viodfjedrf" << std::endl;
    }
};

int main() {
    s::function();
    function();
    return 0;
}