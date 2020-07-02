#include <iostream>
int important = 11;
static void function() {
    //local scope
    std::cout << "this will not be called" << std::endl;
}

void helper() {
    function();
}