
#include "points.hpp"
#include<cmath>

using namespace std;

    

Point::Point() {   
            
    this->x = 0;
    this->y = 0;
}

Point::Point(double x) {
    
    this->x = x;
    this->y = x;
}

Point::Point(double x, double y) {
            
    this->x = x;
    this->y = y;
}

Point::~Point() {
    cout << "Point object destroyed" << endl;
}

int Point::X() const { return x;}

int Point::Y() const { return y; }

void Point::X(int x) { this->x = x; }

void Point::Y(int y) { this->y = y; }

double Point::Distance() const { return sqrt(pow(x,2) + pow(y,2));}

double Point::Distance (const Point &p) const{ return sqrt(pow(x-p.x,2) + pow (y-p.y, 2));}

Point Point::operator+(const Point &p) { return Point(x + p.x, y + p.y);}

Point Point::operator-() { return Point(-x, -y);}

Point Point::operator*(double factor) { return Point(x * factor, y * factor);}

std::string Point::toString() const { return "Point(" + to_string(x) + ", " + to_string(y) + ")";}

Point& Point::operator=(const Point &p) {
            
    x = p.x;
    y = p.y;
    return *this;
}

bool Point::operator==(const Point &p) { return x == p.x && y == p.y;}

Point& Point::operator*=(double factor) {
            
    x *= factor;
    y *= factor;
    return *this;
}


std::ostream& operator<<( std::ostream& os, const Point& p) {
    
    os << p.toString();
    return os;
}

void operator007(Point p) {
    cout << p.toString() + " - 007" << endl;
}
