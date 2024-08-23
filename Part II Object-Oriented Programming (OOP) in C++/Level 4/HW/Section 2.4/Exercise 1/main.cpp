#include <iostream>
#include "points.hpp"
#include "circles.hpp"

using namespace std;

int main () {
    
        Point p1(2,2);
        Point p2 (1,1);
    
        cout << p1.operator*=(2).toString() << endl;
        cout << p1.operator==(p2) << endl;
        cout << p1.operator=(p2).toString() << endl;
        cout << p1.operator-().toString() << endl;

    
        Circle c1;
        Circle c2(1, p2);
    
        cout << c1.operator==(c1) << endl;
        cout << c1.operator==(c2) << endl;
    
        
    
        cout << c2.toString() << endl;
    

        c2.Center(p1);
        c2.Radius(2);
    
        cout << c2.Center().toString() << endl;
        cout << c2.Radius() << endl;
        
        return 0;
}