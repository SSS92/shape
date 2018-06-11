#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif
#include <circle.hpp>
#include <iostream> 

Circle::Circle (double r)
: m_radius(r)
{
    std::cout << "Circle constructor called" << std::endl;
    m_type = "Circle";
}

Circle::Circle(const Circle &c) 
{ 
    std::cout << "Circle copy constructor called" << std::endl;
    m_type = c.get_type();
    m_radius = c.get_radius();
	
}

Circle::~Circle () 
{
    std::cout << "Circle destructor called" << std::endl;
}
/*
void Circle::print () const
{
    Shape::print();
}
*/

double Circle::get_radius () const
{
    return m_radius;
}

bool Circle::set_radius (double r)
{
    m_radius = r;
    return true;
}

double Circle::calculate_area () const
{
    return (pi * m_radius * m_radius);
}

double Circle::calculate_perimeter () const
{
    return (2 * pi * m_radius);
}
