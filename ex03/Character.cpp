#include "Character.hpp"


Character::Character(std::string name)
{
    this->name = name;
}

Character::Character (const Character& copy)
{
    *this = copy;
}

Character &Character::operator=(const Character& copy)
{
    if(this != &copy)
	{
		name = copy.name;
		for(int i = 0; i < 4; i++)
		{
			if(i < 4)
				inventory[i] = copy.inventory[i]->clone();
			else 
				std::cout << "Not enough space";
		}
	}
	return(*this);
}

std::string const &Character::getName() const
{
    return (this->name);
}

void Character::equip(AMateria *m)
{
    int i = 0;
    
    if (!m) {
        std::cout << "Materia is empty or invalid" << std::endl;
        return ;
    }
    while (this->inventory[i] != 0) {
        i++;
    }
    if (i > 3) {
        std::cout << "There is no enough space for Materia\n";
        return ;
    }
    this->inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
    {
        std::cout << "index out of range" << std::endl;
        return ;
    }
    if (this->inventory[idx] == NULL)
    {
        std::cout << "There is no Materia to unequip!" << std::endl;
        return ;
    }
    this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3) {
        std::cout << "Index out of range" << std::endl;
        return ;
    }
    if (!this->inventory[idx]) {
        std::cout << "Nothing found the use" << std::endl;
        return ; 
    }
    inventory[idx]->use(target);
}

Character::~Character()
{

}