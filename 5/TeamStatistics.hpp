#ifndef TEAMSTATISTICS_HEADER
#define TEAMSTATISTICS_HEADER

#include <string>

class TeamStatistics
{

    private:
           std::string teamshortaning = "DEFAULT" ;
           int toreerhalten = 21;
           int toregeschossen = 102;
           int punkte = 100;
           int anzahlspiele = 20;

    public:
        TeamStatistics(std::string a)
        {
            teamshortaning = a;
        }
        void  teamkuerzel(std::string a);

        void showshortening();

        void tordifference();
}; 

#endif //TEAMSTATITSTICS_HEADER

