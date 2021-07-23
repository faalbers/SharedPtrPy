#include "classes.hpp"
#include <iostream>

int main()
{
    std::cout << "Bubba::ChildSPtr c(new Bubba::Child(\"c\"))" << std::endl;
    Bubba::ChildSPtr c(new Bubba::Child("c"));
    std::cout << "Bubba::Parent p(\"p\")" << std::endl;
    Bubba::Parent p("p");
    std::cout << "p.setChildSPtr(c)" << std::endl;
    p.setChildSPtr(c);
    std::cout << "exit" << std::endl;

    return 0;
}