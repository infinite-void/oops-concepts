#include <iostream>
#include "myheader.h"


SomeClass::SomeClass(int a) {
    this->a  = a;
}
void SomeClass::Print() {
    std::cout << this->a  << std::endl;
}