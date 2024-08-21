#include <iostream>
#include "points.hpp"

using namespace std; 

int main () {

    int x, y;
    cout << "Creating a Point object using the constructor" << endl;
    cout << "--------------------------------------------" << endl;
    cout << "Enter x, y to create a point" << endl;
    cin >> x >> y;

    Point p(0, 0);

    cout << "Setting x, y using X and Y overloaded functions" << endl;

    p.X(x);
    p.Y(y);

    cout << "Getting x, y using X and Y overloaded functions" << endl;

    cout << "x: " << p.X() << endl;
    cout << "y: " << p.Y() << endl;

    cout << "Printing the point using toString: " << p.toString() << endl;

    cout << "Distance from origin: " << p.Distance() << endl;

    const Point p1(15, 20);
    
    cout << "Distance from another point (15, 20): " << p.Distance(p1) << endl;

    return 0;
}
