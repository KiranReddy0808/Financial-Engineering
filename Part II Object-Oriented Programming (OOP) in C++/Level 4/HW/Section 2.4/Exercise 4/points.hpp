#include<iostream>
#include<cmath>

using namespace std;

#ifndef POINTS_H

#define POINTS_H



class Point {

    
    private:

        double x, y;

        /*
            Friend function can access private members of the class
        */
        friend ostream& operator<<( ostream& os, const Point& p);

        friend string operator007(Point);
    
    public:

        Point() {   
            
            this->x = 0;
            this->y = 0;
        }

        explicit Point(double x) {
            this->x = x;
            this->y = x;
        }

        Point(double x, double y) {
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

        string toString() const{
            return "Point(" + to_string(x) + ", " + to_string(y) + ")";
        }

        double Distance() const {
            return sqrt(pow(x,2) + pow(y,2));
        }

        double Distance (const Point &p) const{
            return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));
        }

        Point operator+(const Point &p) {
            return Point(x + p.x, y + p.y);
        }

        Point operator-() {
            return Point(-x, -y);
        }

        Point operator*(double factor) {
            return Point(x * factor, y * factor);
        }

        Point& operator=(const Point &p) {
            x = p.x;
            y = p.y;
            return *this;
        }

        bool operator==(const Point &p) {
            return x == p.x && y == p.y;
        }

        Point& operator*=(double factor) {
            x *= factor;
            y *= factor;
            return *this;
        }

};

ostream& operator<<( ostream& os, const Point& p) {
    
    os << p.toString();
    return os;
}

string operator007(Point p) {
    return p.toString() +" - 007";
}

#endif