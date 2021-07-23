#ifndef CLASSES_H
#define CLASSES_H

#include <memory>
#include <string>

namespace Bubba
{

class Child
{
public:
    Child(std::string name);
    ~Child();
private:
    std::string name_;
};

typedef std::shared_ptr<Child> ChildSPtr;

class Parent
{
public:
    Parent(std::string name);
    ~Parent();

    void setChildSPtr(ChildSPtr ChildSPtr);

private:
    ChildSPtr   ChildSPtr_;
    std::string name_;
};

typedef std::shared_ptr<Parent> ParentSPtr;

}

#endif