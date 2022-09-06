#include "Warlock.hpp"

std::string const & Warlock::getName( void ) const
{
    return name;
}

std::string const & Warlock::getTitle( void ) const
{
    return title;
}

void                Warlock::setTitle( std::string const & title)
{
    this->title = title;
}

Warlock::Warlock( std::string const & name, std::string const & title) : name(name), title(title)
{
    std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock( void )
{
    std::cout << this->name << ": My job here is done!" << std::endl;
}

void                Warlock::introduce( void ) const
{
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!"<< std::endl;
}

void                Warlock::learnSpell( ASpell * spell)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spell->getName())
            return;
    }
    this->spells.push_back(spell);
}

void                Warlock::forgetSpell(std::string spell)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spell)
        {
            this->spells.erase(it);
            return;
        }
    }
}

void                Warlock::launchSpell(std::string spell, ATarget const & target)
{
    for (std::vector<ASpell *>::iterator it = spells.begin(); it != spells.end(); it++)
    {
        if ((*it)->getName() == spell)
        {
            (*it)->launch(target);
            return;
        }
    }
}
