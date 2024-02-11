#include"Dog.hpp"
#include"Cat.hpp"
#include "WrongCat.hpp"

int main()
{
		{
			std::cout << BG_GREEN << "\nCorrect" << DEF << std::endl;
			const Animal* meta = new Animal();
			const Animal* j = new Dog();
			const Animal* i = new Cat();
			std::cout << YELLOW << j->getType() << " " << DEF << std::endl;
			std::cout << YELLOW << i->getType() << " " << DEF << std::endl;
			i->makeSound(); //will output the cat sound!
			j->makeSound();
			meta->makeSound();
			delete i;
			delete meta;
			delete j;
		}

		{
			std::cout << BG_RED << "\nIncorrect" << DEF << std::endl;
			const WrongAnimal* meta = new WrongAnimal();
			const WrongAnimal* cat = new WrongCat();
			std::cout << YELLOW << cat->getType() << DEF << std::endl;
			cat->makeSound();
			meta->makeSound();
			delete meta;
			delete cat;
		}

    	return 0;
}

