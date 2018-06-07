#include <iostream>
#include <cstddef>

class Shape
{
     protected: 
        char* m_type;
      
     public:
        virtual double calculate_area () const = 0;        

        virtual double calculate_perimeter() const = 0;

        void print () const;
            
	char* get_type () const;

        Shape ();
        
        Shape (const Shape &s);
        
        ~Shape ();
};

