#include "Zombie.hpp"

int main(){
    int N = 6;
    std::string name = "jessou";
    Zombie *ptr = zombieHorde(N, name);
    std::cout << "sssssss" << std::endl;
    for (int i = 0; i < N; i++){
        std::cout << "sssssss" << std::endl;
         ptr[i].announce();
         std::cout << "sssssss" << std::endl;
    }
    delete[] ptr;
}