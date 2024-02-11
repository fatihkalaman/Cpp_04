#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "** Cat ** Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    std::cout << "** Cat ** Destructor called" << std::endl;
}

Cat::Cat(const Cat& cpy)
{
    std::cout << "** Cat ** Copy constructor called" << std::endl;
    *this = cpy;
}

Cat& Cat::operator=(const Cat& obj)
{
    std::cout << "** Cat ** Copy assignment operator called" << std::endl;
    Animal::type = obj.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << BR_CYAN << "Meow!" << DEF << std::endl;
}