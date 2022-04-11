#include "teamStatistics.hpp"
#include <iostream>
#include <string>

int main() {


    std::string a;
    std::cin >> a;

    TeamStatistics teamstatistics(a);

    teamstatistics.showshortening();
    
return EXIT_SUCCESS;
}