#include<iostream>
#include<cmath>

using namespace std;

#ifndef POINTS_HPP

#define POINTS_HPP

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

        int getX() {
            return x;
        }

        int getY() {
            return y;
        }

        void setX(int x) {
            this->x = x;
        }

        void setY(int y) {
            this->y = y;
        }

        string toString() {
            return "Point(" + to_string(x) + ", " + to_string(y) + ")";
        }

        double DistanceOrigin() {
            return sqrt(pow(x,2) + pow(y,2));
        }

        double Distance (Point p) {
            return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));
        }

};

#endif