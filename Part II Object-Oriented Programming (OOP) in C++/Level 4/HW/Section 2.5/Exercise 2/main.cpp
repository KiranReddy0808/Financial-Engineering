#include <iostream>
#include "points.hpp"

using namespace std;

int main () {

    /*
        Think of it as an array of pointers to Point objects
        Point * points[3];
        Point * p = points[0];
    */
    Point ** points = new Point*[3];
    double x, y;

    for (int i = 0; i < sizeof(points)/sizeof(points[0]); i++) {
        
        cout << "Enter x and y coordinates for point " << i + 1 << ": ";
        cin >> x >> y;
        points[i] = new Point(x, y);
    }

    for (int i = 0; i < sizeof(points)/sizeof(points[0]); i++) {
        cout << "Point " << i + 1 << ": " << *points[i] << endl;
    }

    /* Delete each point */
    for (int i = 0; i < sizeof(points)/sizeof(points[0]); i++) {
        delete points[i];
    }

    /* Delete points array itself*/
    delete[] points;

    return 0;

}