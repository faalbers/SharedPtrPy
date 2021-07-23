#include "classes.hpp"
#include <iostream>

int main()
{
    std::shared_ptr<Bubba::Child> cb(new Bubba::Child("childB"));
    //std::shared_ptr<Child> cc(new Child("childC"));
    Bubba::Parent p("p");
    std::cout << "setChildB: childB" << std::endl;
    p.setChild(cb);
    cb.reset();
    //p.setChildB(cc);

    return 0;
}