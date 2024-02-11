#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(const Cure& copy)
{
    *this = copy;
}

Cure &Cure::operator=(const Cure& copy)
{
    this->type = copy.getType();
    return *this;
}

std::string const &Cure::getType() const
{
    return (this->type);
}

Cure *Cure::clone() const {
    Cure *tmp = new Cure;
    return tmp;
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals" << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{

}