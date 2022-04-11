#ifndef TEAMSTATISTICS_HEADER
#define TEAMSTATISTICS_HEADER

#include <string>

class TeamStatistics
{

    private:
           std::string teamshortaning = "DEFAULT" ;
           int toreerhalten = 0;
           int toregeschossen = 0;
           int punkte = 0;
           int anzahlspiele = 0;

    public:
        TeamStatistics(std::string a)
        {
            teamshortaning = a;
        }
        void  teamkuerzel(std::string a);

        void showshortening();

        void tordifference();

        void Spiel(int toregeschossen, int toreerhalten);
}; 

#endif //TEAMSTATITSTICS_HEADER

