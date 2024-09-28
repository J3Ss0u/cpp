#include <string.h>
#include <iostream>

class Zombie {
    private:
        std::string name;
        int N;
    public:
        Zombie();
        Zombie(std::string name);
        void announce( void );
        ~Zombie();
        void setName(const std::string& zombieName){
            name = zombieName;
        }
        void setN(int newN){
            N = newN;
        }
};

Zombie* zombieHorde( int N, std::string name );