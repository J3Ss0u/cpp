#include <string.h>
#include <iostream>

class Zombie {
    private:
        std::string name;
        int N;
    public:
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
};

Zombie* zombieHorde( int N, std::string name );