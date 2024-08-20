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

    cout << "Printing the point using toString: " << p.toString() << endl;

    cout << "Distance from origin: " << p.DistanceOrigin() << endl;

    cout << "Distance from another point (15, 20): " << p.Distance(Point(15, 20)) << endl;

    return 0;
}
