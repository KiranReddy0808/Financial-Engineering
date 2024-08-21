#include <iostream>
#include "points.hpp"

using namespace std; 

int main () {

    const Point cp(10, 10);

    Point p(1, 1);

    /* 
        p1.X(1); // This will not work because p1 is a const object and const object cannot call non-const member functions 
    */

    cout << cp.X() << endl;
    
    cout << "Distance from another point (15, 20): " << cp.Distance(p) << endl;

    cout << "Distance from origin: " << cp.Distance() << endl;

    return 0;
}
