#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "** WrongAnimal ** Constructor called.\n";
}

WrongAnimal::WrongAnimal(std::string type) {
	std::cout << "** WrongAnimal ** Constructor called.\n";
	this->type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "** WrongAnimal ** Copy Constructor called.\n";
	*this = copy;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[1;31mWrongAnimal destructor called\033[0m\n";
}

WrongAnimal& WrongAnimal::operator =(const WrongAnimal& copy)
{
	this->type = copy.type;
	return(*this);
}

void WrongAnimal::makeSound ()const
{
	 std::cout << "\033[2;37mregular WrongAnimal sound\033[0m" << std::endl;
}
std::string WrongAnimal::getType() const
{
	return(this->type);
}