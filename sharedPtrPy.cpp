#include <pybind11/pybind11.h>
#include "classes.hpp"
#include <iostream>
#include <memory>

namespace py = pybind11;

PYBIND11_MODULE(sharedPtrPy, m)
{
    m.doc() = "Test to see class construction and destruction with Python C++ module";
    
    //py::class_<Bubba::Child>( m, "Child" )
    py::class_<Bubba::Child, Bubba::ChildSPtr>( m, "Child" )
        .def(py::init<std::string>())
        ;

    py::class_<Bubba::Parent>( m, "Parent" )
        .def(py::init<std::string>())
        /*
        .def("setChild", [](Bubba::Parent &self, Bubba::Child &vp) {
                Bubba::ChildSPtr vpSPtr(&vp);
                self.setChildSPtr(vpSPtr);
            })
        */
        .def("setChild", &Bubba::Parent::setChildSPtr)
    ;
}