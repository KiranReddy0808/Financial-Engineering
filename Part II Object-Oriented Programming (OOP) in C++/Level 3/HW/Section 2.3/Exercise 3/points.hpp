#include<iostream>
#include<cmath>

using namespace std;

#ifndef POINTS_H

#define POINTS_H

class Point {

    public:

        int x, y;

        Point(int x, int y) {
            cout << "Point constructor called" << endl;
            this->x = x;
            this->y = y;
        }

        ~Point() {
            cout << "Point object destroyed" << endl;
        }

        int X() {
            return x;
        }

        int Y() {
            return y;
        }

        void X(int x) {
            this->x = x;
        }

        void Y(int y) {
            this->y = y;
        }

        string toString() {
            return "Point(" + to_string(x) + ", " + to_string(y) + ")";
        }

        double Distance() {
            return sqrt(pow(x,2) + pow(y,2));
        }

        double Distance (const Point &p) {
            return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));
        }

};

#endif