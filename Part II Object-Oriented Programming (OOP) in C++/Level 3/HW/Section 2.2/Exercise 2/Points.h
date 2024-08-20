#include<iostream>
#include<cmath>

#ifndef POINTS_H

#define POINTS_H

class Point {

    public:

        int x, y;

        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }

        ~Point() {
            std::cout << "Point object destroyed" << std::endl;
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

        std::string toString() {
            return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
        }

        double DistanceOrigin() {
            return sqrt(pow(x,2) + pow(y,2));
        }

        double Distance (Point p) {
            return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));
        }

};

#endif