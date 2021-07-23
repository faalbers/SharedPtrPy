#include "classes.hpp"
#include <iostream>
#include <string>

Child::Child(std::string name) : name_(name) { std::cout << "===> Child: " << name_ << std::endl; }
Child::~Child() { std::cout << "<=== Child: " << name_ << std::endl; }

Parent::Parent(std::string name) : name_(name), childA_(new Child("childA")), childB_(nullptr) { std::cout << "===> Parent: " << name_ << std::endl; }
Parent::~Parent() { std::cout << "<=== Parent: " << name_ << std::endl; }
void Parent::setChildB(std::shared_ptr<Child> child) { childB_.reset(); childB_ = child; }

Barrier::Barrier(std::string name) : name_(name) { std::cout << "===> Barrier: " << name_ << std::endl; }
Barrier::~Barrier() { std::cout << "<=== Barrier: " << name_ << std::endl; }
