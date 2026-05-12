#ifndef SHAPE_H
#define SHAPE_H

#include "../include.h"

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
