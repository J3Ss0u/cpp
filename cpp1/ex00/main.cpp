#include "Zombie.hpp"

int main(){
    Zombie  name = Zombie("Foo");
    name.announce();
    Zombie *ptr = newZombie("newZombie");
    ptr->announce();
    delete ptr;
    randomChump("randomChump");
}
