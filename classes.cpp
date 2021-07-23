#include "classes.hpp"
#include <iostream>
#include <string>

Bubba::Child::Child(std::string name) : name_(name) { std::cout << "===> Child: " << name_ << std::endl; }
Bubba::Child::~Child() { std::cout << "<=== Child: " << name_ << std::endl; }

Bubba::Parent::Parent(std::string name) : name_(name), child_(nullptr) { std::cout << "===> Parent: " << name_ << std::endl; }
Bubba::Parent::~Parent() { std::cout << "<=== Parent: " << name_ << std::endl; }
void Bubba::Parent::setChild(std::shared_ptr<Child> child) { child_.reset(); child_ = child; }

Bubba::ViewPlane::ViewPlane(std::string name)
    : name_(name)
 {
    #ifdef CLASS_DEBUG
    std::cout << "===> ViewPlane: " << name_ << std::endl;
    #endif
}

Bubba::ViewPlane::~ViewPlane()
{
    #ifdef CLASS_DEBUG
    std::cout << "<=== ViewPlane: " << name_ << std::endl;
    #endif
}

Bubba::RenderJob::RenderJob(std::string name)
    : name_(name)
{
    #ifdef CLASS_DEBUG
    std::cout << "===> RenderJob: " << name_ << std::endl;
    #endif
}

Bubba::RenderJob::~RenderJob()
{
    #ifdef CLASS_DEBUG
    std::cout << "<=== RenderJob: " << name_ << std::endl;
    #endif
}

void Bubba::RenderJob::setViewPlaneSPtr(Bubba::ViewPlaneSPtr viewPlaneSPtr)
{
    // NeedFix: make sure we need to reset first
    viewPlaneSPtr_.reset(); // delete managed object
    viewPlaneSPtr_ = viewPlaneSPtr;
}
