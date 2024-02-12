#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
    int i = 0;
    for (i = 0; i < 4; i++) {
        this->inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& copy) {
    if (this != &copy)
	{
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

MateriaSource::~MateriaSource() {
    int i = 0;
    for (i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    
    if (!m)
        return ;
    while (i < 4 && this->inventory[i] != 0)
        i++;
    if (i < 4)
        this->inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    int i = 0;
    for (i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}
