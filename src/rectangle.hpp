#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif
#include <iostream>

class Rectangle : public Shape
{
     protected: 
        double m_width;
        double m_height;
      
     public:
        double calculate_area () const;        

        double calculate_perimeter() const;

        void print () const;
        
        double get_width () const;

        double get_height () const;

        bool set_width (double w);

        bool set_height (double h);

        Rectangle (double width, double height);
        
        Rectangle (const Rectangle &r);
        
        ~Rectangle ();
};
