#include <iostream>
#include "Points.h"

using namespace std; 

int main () {

    int x, y;
    cout << "Creating a Point object using the constructor" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter x, y to create a point" << endl;
    cin >> x >> y;

    Point p(0, 0);

    cout << "Setting x, y using setX and setY" << endl;

    p.setX(x);
    p.setY(y);

    cout << "Getting x, y using getX and getY" << endl;

    cout << "x: " << p.getX() << endl;
    cout << "y: " << p.getY() << endl;

    cout << "Printing the point using toString" << endl;

    cout << p.toString() << endl;

    return 0;
}
