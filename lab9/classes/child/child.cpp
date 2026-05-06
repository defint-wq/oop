#include "child.h"

Child::Child() { this->favoriteToy = "Toy"; } 

Child::Child(string name, string ssNum, int age, string favoriteToy) 
{ 
    this->setFavoriteToy(favoriteToy); 
    this->setName(name);
    this->setSSNum(ssNum);
    this->setAge(age);
}

void Child::setFavoriteToy(string favoriteToy) { this->favoriteToy = favoriteToy; }

string Child::getFavoriteToy () const { return this->favoriteToy; }

void Child::print() const
{
    Person::print();
    cout << "Дуртай тоглоом: " << this->getFavoriteToy() << endl;
}