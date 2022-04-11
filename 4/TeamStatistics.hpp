#ifndef TEAMSTATISTICS_HEADER
#define TEAMSTATISTICS_HEADER

#include <string>

class TeamStatistics
{

    private:
           std::string teamshortaning;
    public:
        TeamStatistics(std::string a)
        {
            teamshortaning = a;
        }
        void  teamkuerzel(std::string a);

        void showshortening();

}; 

#endif //TEAMSTATITSTICS_HEADER

