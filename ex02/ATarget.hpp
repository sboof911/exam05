#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class  ATarget
{
    protected:
        std::string type;

    public:
        std::string const & getType( void ) const;
        virtual ATarget *	clone( void ) const = 0;

        ATarget( void );
        ATarget( std::string const & type);
        ATarget( ATarget const & src );
        ATarget & operator=( ATarget const & src );
        virtual ~ATarget( void );

        void    getHitBySpell( ASpell const & aspell ) const;

};

#endif