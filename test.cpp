#include "classes.hpp"
#include <iostream>

int main()
{
    std::shared_ptr<Child> cb(new Child("childB"));
    //std::shared_ptr<Child> cc(new Child("childC"));
    Barrier b("b");
    Parent p("p");
    std::cout << "setChildB: childB" << std::endl;
    p.setChildB(cb);
    cb.reset();
    //p.setChildB(cc);

    return 0;
}