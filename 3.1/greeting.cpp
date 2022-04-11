#include "greeting.hpp"
#include <iostream>
#include <string>

    void Greeting::print(std::string a){
        std::cout << a << " | Ticks: " << Greeting::tickcount << std::endl;  
    }

    void Greeting::tick(){
        tickcount++;
};// namespace Greeting
