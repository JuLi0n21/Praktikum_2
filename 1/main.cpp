#include "greeting.hpp"
#include <iostream>

int main() {

    Greeting* greeting = new Greeting;
        //std::cout << "Hello World!" << std::endl;
    greeting->print(); 
    return EXIT_SUCCESS;
}