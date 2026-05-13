#include "functions.hpp"

List<Shape2D*> makeRandoms() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> real(1.0, 100.0);
    uniform_int_distribution<> mySwitch(1, 3);
    uniform_int_distribution<> many(20, 30);

    List<Shape2D*> shapeList;
    int count = many(gen);
    for (int i = 0; i < count; i++)
    {
        int k = mySwitch(gen);
        double what = real(gen);

        if (k == 1) {
            shapeList.add(new Square(what, 0, 0));

        } else if (k == 2) {
            shapeList.add(new Circle(what, 0, 0));

        } else {
            shapeList.add(new Triangle(what, 0, 0));

        }
    }
    
    return shapeList;
}