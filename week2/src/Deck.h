#include <string>
// Card struct definition
struct Card
{
    public:
        int number;
        std::string suit;       
};

//Deck class definition
class Deck
{
    public:
        Deck();
        void Shuffle();
};