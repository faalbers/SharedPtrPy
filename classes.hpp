#ifndef CLASSES_H
#define CLASSES_H

#include <memory>
#include <string>

class Child
{
public:
    Child(std::string name);
    ~Child();
private:
    std::string name_;
};

class Parent
{
public:
    Parent(std::string name);
    ~Parent();
    void setChildB(std::shared_ptr<Child> child);
private:
    std::string name_;
    std::shared_ptr<Child> childA_;
    std::shared_ptr<Child> childB_;
};

class Barrier
{
public:
    Barrier(std::string name);
    ~Barrier();
private:
    std::string name_;
};

#endif