#include "greeting.hpp"
#include <iostream>
#include <string>

int main() {

    std::string a;
    Greeting greeting;
        //std::cout << "Hello World!" << std::endl;
        std::cin >> a; 
    greeting.print(a); 
    return EXIT_SUCCESS;
}