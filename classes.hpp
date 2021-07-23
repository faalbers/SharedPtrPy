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

class ViewPlane
{
public:
    ViewPlane(std::string name);
    ~ViewPlane();
private:
    std::string name_;
};

typedef std::shared_ptr<ViewPlane> ViewPlaneSPtr;

class Parent
{
public:
    Parent(std::string name);
    ~Parent();
    void setChild(std::shared_ptr<Child> child);
private:
    std::string name_;
    std::shared_ptr<Child> child_;
};

class RenderJob
{
public:
    RenderJob(std::string name);
    ~RenderJob();

    void setViewPlaneSPtr(ViewPlaneSPtr viewPlaneSPtr);

private:
    ViewPlaneSPtr   viewPlaneSPtr_;
    std::string name_;
};

typedef std::shared_ptr<RenderJob> RenderJobSPtr;

}

#endif