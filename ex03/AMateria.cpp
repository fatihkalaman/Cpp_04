#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{

}

AMateria::AMateria(std::string const& type)
{
    this->type = type;
}

AMateria::AMateria(const AMateria& copy)
{
    this->type = copy.getType();
}

AMateria &AMateria::operator=(const AMateria& copy)
{
    if(this != &copy)
		type = copy.type;
	return(*this);
}

std::string const &AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}

AMateria::~AMateria() {
}