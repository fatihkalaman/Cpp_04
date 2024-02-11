#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = 0;
    }
}

MateriaSource::MateriaSource(const MateriaSource& copy) {
    *this = copy;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& copy) {
    for (int i = 0; i < 4; i++) {
        this->inventory[i] = copy.inventory[i];
    }
    return *this;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    
    if (!m)
    {
        std::cout << "Materia is empty" << std::endl;
        return ;
    }
    while (this->inventory[i] != 0)
        i++;
    if (i > 1)
    {
        std::cout << "There is no enough space for learn Materia" << std::endl;
        return ;
    }
    this->inventory[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < 4; i++) {
        if (this->inventory[i] != NULL && this->inventory[i]->getType() == type)
            return this->inventory[i]->clone();
    }
    return NULL;
}
