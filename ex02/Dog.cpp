#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
    std::cout << "** Dog ** Default constructor called" << std::endl;
    AAnimal::setType("Dog");
    this->brain = new Brain();
}

Dog::~Dog()
{
    std::cout << "** Dog ** Destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy): AAnimal(cpy)
{
    std::cout << "** Dog ** Copy constructor called" << std::endl;
    *this = cpy;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "** Dog ** Copy assignment operator called" << std::endl;
    AAnimal::type = obj.type;
    if(!this->brain)
    	this->brain = new Brain();
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}