#include "Zombie.hpp"

int main(){
    int N = 2;
    std::string name = "jessou";
    Zombie *ptr = zombieHorde(N, name);

    for (int i = 0; i < N; i++){
        std::cout << "Zombie " << i << " says: ";
         ptr[i].announce();
    }
    delete[] ptr;
}