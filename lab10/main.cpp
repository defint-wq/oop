#include "oop.hpp"

int main() {
    List<Shape2D*> shapeList = makeRandoms();
    sortByArea(shapeList);
    print(shapeList);
    clearShapes(shapeList);

    return 0;
}