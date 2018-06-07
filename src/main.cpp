#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <shape.hpp>
#endif
#include <circle.hpp>
#include <rectangle.hpp>
#include <iostream>

int main () 
{
    Circle c(10.0);
    Rectangle r(5.0, 8.0);
    Shape* a[2] = {&c, &r};
    for (int i = 0; i < 2; ++i) {
        (*(a[i])).print();	
    }
    std::cout << std::endl;
    Rectangle u = r;
    Circle z = c;
    u.print();
    z.print();
    return 0;
}    
