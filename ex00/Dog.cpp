#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "** Dog ** Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "** Dog ** Destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy)
{
    std::cout << "** Dog ** Copy constructor called" << std::endl;
    *this = cpy;
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "** Dog ** Copy assignment operator called" << std::endl;
    Animal::type = obj.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << BR_CYAN << "Bark!" << DEF << std::endl;
}