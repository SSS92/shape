#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif
#include <iostream> 

Shape::Shape ()
{
    std::cout << "Shape constructor called" << std::endl;
}

Shape::Shape(const Shape &s) 
{ 
    std::cout << "Shape copy constructor called" << std::endl;
    m_type = s.get_type();
}

void Shape::print () const
{
    std::cout << get_type() << " --- ";
    std::cout << " Area: " << calculate_area();
    std::cout << " Perimeter: " << calculate_perimeter() << std::endl;
}

char* Shape::get_type () const
{
	return m_type;
}

Shape::~Shape () 
{
    std::cout << "Shape destructor called" << std::endl;
}

