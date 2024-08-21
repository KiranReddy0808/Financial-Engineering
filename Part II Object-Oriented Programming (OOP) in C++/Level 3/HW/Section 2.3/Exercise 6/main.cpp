#include <iostream>
#include "points.hpp"
#include "circles.hpp"

using namespace std;

int main () {
    
        Point p1;
        Point p2 (1,1);
    
        cout << p1.toString() << endl;
    
        Circle c1;
    
        cout << c1.toString() << endl;
    
        Circle c2(1, p2);
    
        cout << c2.toString() << endl;
    
        cout << "Area of c1: " << c1.Area() << endl;
        cout << "Diameter of c1: " << c1.Diameter() << endl;
        cout << "Circumference of c1: " << c1.Circumference() << endl;
        cout << "Area of c2: " << c2.Area() << endl;
        cout << "Diameter of c2: " << c2.Diameter() << endl;
        cout << "Circumference of c2: " << c2.Circumference() << endl;

        c2.Center(p1);
        c2.Radius(2);
    
        cout << c2.Center().toString() << endl;
        cout << c2.Radius() << endl;
        
        return 0;
}