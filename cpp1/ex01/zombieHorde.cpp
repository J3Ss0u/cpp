#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie* horde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        // Assuming Zombie class has a setName method or similar
        horde[i].setName(name);
    }
}