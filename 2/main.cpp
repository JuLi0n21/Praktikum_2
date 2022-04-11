#include "greeting.hpp"
#include <iostream>

int main() {

    char a;
    Greeting* greeting = new Greeting;
        //std::cout << "Hello World!" << std::endl;
        std::cin >> a; 
    greeting->print(); 
    return EXIT_SUCCESS;
}