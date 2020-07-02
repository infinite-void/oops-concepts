#include <iostream>


void function() {
    static int i = 0;
    //std::cout << i++ << std::endl;
}

int main() {
    int k = 5;
    for(int i = 0; i < 5; i++) {
        function();
        
        std::cout << k << std::endl;
    }
    std::cout << k << std::endl;
    return 0;
}