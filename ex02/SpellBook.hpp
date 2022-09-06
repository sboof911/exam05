#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include "ASpell.hpp"
#include <vector>

class SpellBook
{
private:
    SpellBook( SpellBook const & src);
    std::vector<ASpell *>   spells;


public:
    SpellBook();
    ~SpellBook();
    void learnSpell(ASpell*);
    void forgetSpell( std::string const &);
    ASpell* createSpell( std::string const &);
};



#endif