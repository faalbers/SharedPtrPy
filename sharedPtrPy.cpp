#include <pybind11/pybind11.h>
#include "classes.hpp"
#include <iostream>
#include <memory>

namespace py = pybind11;

PYBIND11_MODULE(sharedPtrPy, m)
{
    m.doc() = "Test to see class construction and destruction with Python C++ module";
    
    py::class_<Bubba::RenderJob>( m, "RenderJob" )
        .def(py::init<std::string>())
        .def("setViewPlane", [](Bubba::RenderJob &self, Bubba::ViewPlane &vp) {
                Bubba::ViewPlaneSPtr vpSPtr(&vp);
                self.setViewPlaneSPtr(vpSPtr);
            })
    ;
    
    py::class_<Bubba::ViewPlane>( m, "ViewPlane" )
        .def(py::init<std::string>())
        ;

    py::class_<Bubba::Child, std::shared_ptr<Bubba::Child>>( m, "Child" ).def(py::init<std::string>());
    
    py::class_<Bubba::Parent>( m, "Parent" )
        .def(py::init<std::string>())
        .def("setChild", &Bubba::Parent::setChild)
        ;
}