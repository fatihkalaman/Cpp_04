#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    std::cout << BR_RED << "**--------------------------------**" << DEF << std::endl;

    const int Acount = 2;
    AAnimal* AAnimals[Acount];

    for (int i = 0; i < (Acount/2); i++)
        AAnimals[i] = new Dog();
     for (int i = (Acount/2); i < Acount; i++)
        AAnimals[i] = new Cat();

    for (int i = 0; i <Acount; i++)
        AAnimals[i]->makeSound();
    for (int i = 0; i <Acount; i++)
        std::cout << BR_YELLOW << "Type: " << YELLOW << AAnimals[i]->getType() << DEF << std::endl;

    for (int indx = 0; indx < Acount; indx++)
        delete AAnimals[indx];
    delete j;
    delete i;

    return 0;
}