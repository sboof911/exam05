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