#include "Zombie.hpp"

void Zombie::announce(){
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie() : name(""), N(0) {
    std::cout << "A nameless zombie has risen!" << std::endl;
}

Zombie::Zombie(std::string zombieName):name(zombieName), N(0){
}

Zombie::~Zombie(){
    std::cout << "Zombie " << name << " destroyed" << std::endl;
}