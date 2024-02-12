#include "Dog.hpp"

Dog::Dog(): AAnimal()
{
    std::cout << "** Dog ** Default constructor called" << std::endl;
    AAnimal::setType("Dog");
    this->brain = new Brain();
}

Dog::~Dog()
{
    delete brain;
    std::cout << "** Dog ** Destructor called" << std::endl;
}

Dog::Dog(const Dog& cpy): AAnimal(cpy)
{
    std::cout << "** Dog ** Copy constructor called" << std::endl;
    this->brain = new Brain();
    *this = cpy;
}

Dog& Dog::operator=(const Dog& obj)
{
    AAnimal::type = obj.type;
    *this->brain = *obj.brain;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Bark!" << std::endl;
}