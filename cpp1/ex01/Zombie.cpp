#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string zombieName):name(zombieName){

}

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}