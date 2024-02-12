#include "Character.hpp"

Character::Character(std::string name)
{
    this->name = name;
    int i = 0;
    for (i = 0; i < 4; i++)
        this->inventory[i] = 0;
}

Character::Character (const Character& copy)
{
    int i = 0;
    for (i = 0; i < 4; i++)
        this->inventory[i] = 0;
    *this = copy;
}

Character &Character::operator=(const Character& copy)
{
    if (this != &copy)
	{
		name = copy.name;
        int i;
		for (i = 0; i < 4; i++)
        {
            if (this->inventory[i])
                delete this->inventory[i];
			if (copy.inventory[i])
				this->inventory[i] = copy.inventory[i]->clone();
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
    
    if (!m)
        return ;
    while (i < 4 && this->inventory[i] != 0)
        i++;
    if (i < 4)
        this->inventory[i] = m;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    delete this->inventory[idx];
    this->inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx > 3)
        return ;
    if (!this->inventory[idx])
        return ; 
    inventory[idx]->use(target);
}

Character::~Character()
{
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}