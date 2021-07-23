#include "classes.hpp"
#include <iostream>
#include <string>

Bubba::Child::Child(std::string name)
    : name_(name)
 {
    std::cout << "===> Child: " << name_ << std::endl;
}

Bubba::Child::~Child()
{
    std::cout << "<=== Child: " << name_ << std::endl;
}

Bubba::Parent::Parent(std::string name)
    : name_(name), ChildSPtr_(nullptr)
{
    std::cout << "===> Parent: " << name_ << std::endl;
}

Bubba::Parent::~Parent()
{
    std::cout << "<=== Parent: " << name_ << std::endl;
}

void Bubba::Parent::setChildSPtr(Bubba::ChildSPtr ChildSPtr)
{
    ChildSPtr_.reset();
    ChildSPtr_ = ChildSPtr;
}
