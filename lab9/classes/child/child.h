#ifndef CHILD_H
#define CHILD_H

#include "../person/person.h"

class Child : public Person {
    private:
        string favoriteToy;
        
    public:
        Child();
        Child(string name, string ssNum, int age, string favoriteToy);
        void setFavoriteToy(string favoriteToy);
        string getFavoriteToy() const;
        void print() const;
};

#endif