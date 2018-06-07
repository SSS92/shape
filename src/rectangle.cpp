#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif
#include <rectangle.hpp>
#include <iostream> 

Rectangle::Rectangle (double w, double h)
:  m_width(w), m_height(h)
{
    std::cout << "Rectangle constructor called" << std::endl;
    m_type = "Rectangle";
}

Rectangle::Rectangle(const Rectangle &r) 
{ 
    std::cout << "Rectangle copy constructor called" << std::endl;
    m_type = r.get_type();
    m_width = r.get_width();
    m_height = r.get_height();
}

Rectangle::~Rectangle () 
{
    std::cout << "Rectangle destructor called" << std::endl;
}

void Rectangle::print () const
{
    Shape::print();
}

double Rectangle::get_width () const
{
    return m_width;
}

double Rectangle::get_height () const
{
    return m_height;
}

bool Rectangle::set_width (double w)
{
    m_width = w;
    return true;
}

bool Rectangle::set_height (double h)
{
    m_height = h;
    return true;
}

double Rectangle::calculate_area () const
{
    return (m_height * m_width);
}

double Rectangle::calculate_perimeter () const
{
    return (2 * (m_height + m_width));
}
