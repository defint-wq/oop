#include "functions.hpp"

void clearShapes(List<Shape2D*>& shapeList) {
    cout << endl <<"Deletting shapes" << endl;
    while (shapeList.length()) {
        Shape2D* s = shapeList.get(0);
        
        delete s;
        
        shapeList.deleteNode(0);
    }
    cout << endl << "Done." << endl;
}