#include "SpellBook.hpp"

SpellBook::SpellBook( void )
{

}

SpellBook::~SpellBook( void )
{

}

void    SpellBook::learnSpell( ASpell * Aspell )
{
    for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
    {
        if ((*it)->getName() == Aspell->getName())
            return;
    }
    this->spells.push_back(Aspell);
}

void    SpellBook::forgetSpell( std::string const & spell )
{
    for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
    {
        if ((*it)->getName() == spell)
            this->spells.erase(it);
    }
}

ASpell*    SpellBook::createSpell( std::string const & spell )
{
    for (std::vector<ASpell *>::iterator it = this->spells.begin(); it != this->spells.end(); it++)
    {
        if ((*it)->getName() == spell)
            return *it;
    }
    return NULL;
}