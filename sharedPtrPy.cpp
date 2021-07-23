#include <pybind11/pybind11.h>
#include "classes.hpp"
#include <iostream>
#include <memory>

namespace py = pybind11;

PYBIND11_MODULE(sharedPtrPy, m)
{
    m.doc() = "Test to see class construction and destruction with Python C++ module";
    
    py::class_<Child, std::shared_ptr<Child>>( m, "Child" ).def(py::init<std::string>());
    
    py::class_<Parent>( m, "Parent" )
        .def(py::init<std::string>())
        .def("setChildB", &Parent::setChildB)
        ;
    
    py::class_<Barrier>( m, "Barrier" ).def(py::init<std::string>());
}