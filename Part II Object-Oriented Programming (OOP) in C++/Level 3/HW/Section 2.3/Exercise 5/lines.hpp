#include <iostream>
#include "points.hpp"

using namespace std;

#ifndef LINES_H

#define LINES_H

class Line {
    
    public:

        Point startPoint, endPoint;
        
        Line() {
            cout << "Line constructor called" << endl;
            this->startPoint = Point(0,0);
            this->endPoint = Point(0,0);
        }

        Line(Point &endPoint) {
            cout << "Line constructor called" << endl;
            this->startPoint = Point(0,0);
            this->endPoint = endPoint;
        }

        Line(Point &startPoint, Point &endPoint) {
            cout << "Line constructor called" << endl;
            this->startPoint = startPoint;
            this->endPoint = endPoint;
        }

        ~Line() {
            cout << "Line object destroyed" << endl;
        }

        Point start() const {
            return startPoint;
        }

        Point end() const {
            return endPoint;
        }

        void start(Point &p) {
            this->startPoint = p;
        }

        void end(Point &p) {
            this->endPoint = p;
        }

        string toString() {
            return "Line(" + startPoint.toString() + ", " + endPoint.toString() + ")";
        }

        double Length() const {
            return startPoint.Distance(endPoint);
        }
};

#endif