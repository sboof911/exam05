#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator( void )
{

}

TargetGenerator::~TargetGenerator( void )
{

}

void    TargetGenerator::learnTargetType( ATarget * atarget)
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if ((*it)->getType() == atarget->getType())
            return;
    }
    this->targets.push_back(atarget);
}

void    TargetGenerator::forgetTargetType( std::string const & target )
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if ((*it)->getType() == target)
            this->targets.erase(it);
    }
}

ATarget*    TargetGenerator::createTarget( std::string const & target )
{
    for (std::vector<ATarget*>::iterator it = this->targets.begin(); it != this->targets.end(); it++)
    {
        if ((*it)->getType() == target)
            return *it;
    }
    return NULL;
}