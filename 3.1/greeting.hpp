#ifndef GREETING_CLASS_HEADER
#define GREETING_CLASS_HEADER
#include <string>


class Greeting 
{

private:
    int tickcount = 0;

public:
    void print(std::string a);
    
    void tick();
};   //GREETING_CLASS_HEADER

#endif //GREETING_CLASS_HEADER