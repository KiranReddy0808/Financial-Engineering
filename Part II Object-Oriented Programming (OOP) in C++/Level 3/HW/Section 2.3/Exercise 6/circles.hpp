#include<iostream>
#include<cmath>
#include "points.hpp"

using namespace std;

#ifndef CIRCLES_H

#define CIRCLES_H

class Circle {

    public:

        double radius;
        Point center;

        /*
            this is used for distinguishing between member variables and parameters
        */
        Circle() {
            cout << "Circle constructor called" << endl;
            this->radius = 0;
            this->center = Point();
        }

        Circle(double radius, Point center) {
            cout << "Circle constructor called" << endl;
            this->radius = radius;
            this->center = center;
        }

        ~Circle() {
            cout << "Circle object destroyed" << endl;
        }

        double Radius() const {
            return radius;
        }

        void Radius(double radius) {
            this->radius = radius;
        }

        void Center(Point center) {
            this->center = center;
        }

        Point Center() const {
            return center;
        }

        double Diameter() const {
            return 2 * radius;
        }

        double Area() const {
            return M_PI * pow(radius, 2);
        }

        double Circumference() const {
            return 2 * M_PI * radius;
        }

        string toString() {
            return "Circle(" + to_string(radius) + ", " + center.toString() + ")";
        }

        double Distance (const Circle &c) const {
            return center.Distance(c.center);
        }

};

#endif