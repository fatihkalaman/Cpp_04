#include"WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout<<"** WrongCat ** Constructor called.\n";
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "** WrongCat ** Copy Constructor called.\n";
	*this = copy;
}

WrongCat::~WrongCat()
{
	std::cout << "\033[1;31m** WrongCat ** destructor called\033[0m" << std::endl;
}

WrongCat& WrongCat ::operator =(const WrongCat& copy)
{
	WrongAnimal::type = copy.type;
	return(*this);
}
void WrongCat::makeSound ()const
{
	 std::cout << "Meow!" << std::endl;
}