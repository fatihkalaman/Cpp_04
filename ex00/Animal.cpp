#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default Constructor called.\n";
}

Animal::Animal(std::string type):type(type){
	std::cout << "Constructor called.\n";
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Copy Constructor called.\n";
	*this = copy;
}

Animal::~Animal()
{
	std::cout << BR_RED << "Destructor called.\n" << DEF;
}

Animal& Animal::operator=(const Animal& copy)
{
	this->type = copy.type;
	return(*this);
}

void Animal::makeSound ()const
{
	 std::cout << S_WHITE << "regular Animal sound" << DEF << std::endl;
}
std::string Animal::getType() const
{
	return(this->type);
}