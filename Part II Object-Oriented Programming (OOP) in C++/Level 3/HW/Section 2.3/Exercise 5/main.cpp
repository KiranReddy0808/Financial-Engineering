#include <iostream>
#include "points.hpp"
#include "lines.hpp"

using namespace std;

int main () {

    /*
        The problem is that `Point p1 ();` is interpreted as a function declaration instead of an object instantiation. To fix this, you need to remove the parentheses to correctly instantiate the `Point` object.
    */

    Point p1;
    Point p2 (1,1);

    cout << p1.toString() << endl;

    Line l1;

    cout << l1.toString() << endl;

    Line l2(p1, p2);

    cout << l2.toString() << endl;

    Line l3(p2);

    cout << l3.toString() << endl;

    cout << "Length of l1: " << l1.Length() << endl;
    
    l3.end(p1);
    l3.start(p2);

    cout << l3.start().toString() << endl;
    cout << l3.end().toString() << endl;
    
    return 0;
}