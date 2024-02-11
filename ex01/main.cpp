#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Cat a;

    std::cout << BR_MAGENTA << (a.getBrain()->ideas[10] = "I want to eat meat") << DEF << std::endl;
	std::cout << BR_MAGENTA << (a.getBrain()->ideas[9]) << DEF << std::endl;

    Animal* Animal[4];

    Animal[0] = new Dog();
    Animal[1] = new Dog();
    Animal[2] = new Cat();
    Animal[3] = new Cat();

    for (int i = 0; i < 4; i++)
    {
        Animal[i]->makeSound();
    }
    
    for (int i = 0; i < 4; i++)
    {
        std::cout << CYAN << "Type: " << Animal[i]->getType() << DEF << std::endl;
    }

    for (int indx = 0; indx < 4; indx++)
    {
        delete Animal[indx];
    }
    delete j;
    delete i;
    
    return 0;
}
