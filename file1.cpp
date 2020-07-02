#include <iostream>
#include "file0.h"
global int x = 56;
extern int important;
extern void function();

int main() {
    
    std::cout << important << std::endl;
    function();
    helper();
    return 0;
}