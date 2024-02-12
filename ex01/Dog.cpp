#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    std::cout << "** Dog ** Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    delete brain;
    std::cout << "** Dog ** Destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
    this->brain = new Brain();
    *this = cpy;
}

Dog& Dog::operator=(const Dog& obj)
{
    Animal::type = obj.type;
    *this->brain = *obj.brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << BR_YELLOW << "Bark!" << DEF << std::endl;
}

Brain *Dog::getBrain() const
{
	return (this->brain);
}
