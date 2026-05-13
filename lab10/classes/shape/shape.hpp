#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "../include.hpp"

class Shape {
    protected:
        string name;
        static int count;
    
    public:
        Shape();
        Shape(const string& name);       
        void setName(const string& name);
        string getName() const;
        static int getCount();
};

#endif
