#include "teamStatistics.hpp"
#include <iostream>
#include <string>

int main() {


    std::string a;
    std::cin >> a;

    TeamStatistics teamstatistics(a);

   // teamstatistics.showshortening();

   // teamstatistics.tordifference();
    
    int b;
    int c;
    while(std::cin >> b >> c) {
        
        teamstatistics.Spiel(b, c);
    }

  //  teamstatistics.showshortening();

    teamstatistics.tordifference();
return EXIT_SUCCESS;
}