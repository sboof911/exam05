#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP

#include "ATarget.hpp"
#include <vector>

class ATarget;

class TargetGenerator
{
private:
    std::vector<ATarget*>  targets;
public:
    TargetGenerator(/* args */);
    ~TargetGenerator();

    void        learnTargetType(ATarget*);
    void        forgetTargetType(std::string const &);
    ATarget*    createTarget(std::string const &);
};



#endif