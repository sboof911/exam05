#include "ATarget.hpp"

ATarget::ATarget( void )
{

}

ATarget::ATarget( std::string const & type ) : type(type)
{
    
}

ATarget::~ATarget( void )
{

}

ATarget::ATarget( ATarget const & src )
{
    *this = src;
}

ATarget & ATarget::operator=( ATarget const & src )
{
    this->type = src.type;

    return (*this);
}

std::string const & ATarget::getType( void ) const
{
    return (this->type);
}

void    ATarget::getHitBySpell( ASpell const & aspell ) const
{
    std::cout << this->type << " has been " << aspell.getEffects() << "!" << std::endl;
}