#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"

class Warlock
{
    private:
        std::string                 name;
        std::string                 title;
        std::vector<ASpell *>       spells;
        Warlock( void );
        Warlock(Warlock const & src);

    public:
        Warlock( std::string const & name, std::string const & title);
        ~Warlock( void );
      
        std::string const & getName( void ) const;
        std::string const & getTitle( void ) const;
        void                setTitle( std::string const & title);
        void                introduce() const;

        void                learnSpell( ASpell * spell);
        void                forgetSpell(std::string spell);
        void                launchSpell(std::string spell, ATarget const & target);
};

#endif