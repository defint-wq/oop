#include "child.h"

Child::Child() { this->favoriteToy = "Toy"; } 

Child::Child(string favoriteToy) { this->setFavoriteToy(favoriteToy); }

void Child::setFavoriteToy(string favoriteToy) { this->favoriteToy = favoriteToy; }

string Child::getFavoriteToy () const { return this->favoriteToy; }