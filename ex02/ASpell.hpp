#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
    protected:
        std::string name;
        std::string effects;

    public:
        std::string const &     getName( void ) const;
        std::string const &      getEffects( void ) const;
        virtual ASpell *	clone( void ) const = 0;
        void                launch( ATarget const & target ) const;

        ASpell( void );
        ASpell( ASpell const & src);
        ASpell & operator=(ASpell const & src);
        ASpell( std::string const & name, std::string const & effects);
        virtual ~ASpell( void );
};

#endif