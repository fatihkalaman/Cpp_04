#include "Cat.hpp"

Cat::Cat(): AAnimal()
{
	std::cout<<"** Cat ** Constructor called.\n";
	AAnimal::setType("Cat");
	this->brain = new Brain();
}

Cat::Cat(const Cat& copy): AAnimal(copy)
{
	std::cout << "** Cat ** Copy Constructor called.\n";
	this->brain = new Brain();
	*this = copy;
}

Cat::~Cat(){
	delete brain;
	std::cout << "** Cat ** Destructor called.\n";
}

Cat& Cat ::operator =(const Cat& copy)
{
	AAnimal::type = copy.type;
    *this->brain = *copy.brain;
	return(*this);
}

void Cat::makeSound ()const
{
	 std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
