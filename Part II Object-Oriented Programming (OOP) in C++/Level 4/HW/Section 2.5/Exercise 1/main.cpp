#include <iostream>
#include "points.hpp"

using namespace std;

int main () {

    Point p1 (1);

    Point *p2 = new Point(2);

    Point* p3 = new Point(p1);

    Point* p4 = new Point(*p2);

    p3->Distance();

    cout << p1 << endl;
    cout << *p2 << endl;
    cout << *p3 << endl;
    cout << *p4 << endl;

    cout << "Distance between p1 and p3: " << p1.Distance(*p3) << endl;
    cout << "Distance between p2 and p4: " << (*p2).Distance(*p4) << endl;

    delete p2;
    delete p3;
    delete p4;

    return 0;

}