#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(const Ice& copy)
{
    *this = copy;
}

Ice &Ice::operator=(const Ice& copy)
{
    this->type = copy.getType();
    return *this;
}

std::string const &Ice::getType() const
{
    return (this->type);
}

Ice *Ice::clone() const {
    Ice *tmp = new Ice(*this);
    return tmp;
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{

}