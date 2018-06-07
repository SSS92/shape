#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif

class Circle : public Shape
{
     protected: 
        double m_radius;
        const double pi = 3.14;

     public:
        double calculate_area () const;        

        double calculate_perimeter() const;

        void print () const;
        
        double get_radius () const;

        bool set_radius (double r);

        Circle (double r);
        
        Circle (const Circle &c);
        
        ~Circle ();
};

