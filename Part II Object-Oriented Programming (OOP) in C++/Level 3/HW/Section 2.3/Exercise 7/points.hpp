#include<iostream>
#include<cmath>

using namespace std;

#ifndef POINTS_H

#define POINTS_H

class Point {

    private:

        int x, y;
    
    public:

        Point() {   
            
            this->x = 0;
            this->y = 0;
        }

        Point(int x, int y) {
            this->x = x;
            this->y = y;
        }

        ~Point() {
            cout << "Point object destroyed" << endl;
        }

        int X() const { return x;}

        int Y() const { return y; }

        void X(int x) { this->x = x; }

        void Y(int y) { this->y = y; }

        string toString() {
            return "Point(" + to_string(x) + ", " + to_string(y) + ")";
        }

        double Distance() const {
            return sqrt(pow(x,2) + pow(y,2));
        }

        double Distance (const Point &p) const{
            return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));
        }

};

#endif