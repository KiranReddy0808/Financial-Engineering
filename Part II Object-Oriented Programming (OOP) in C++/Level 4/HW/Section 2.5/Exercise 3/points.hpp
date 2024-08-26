#include<iostream>
#include<cmath>
#include<string>

#ifndef POINTS_H

#define POINTS_H



class Point {

    
    private:

        double x, y;

        /*
            Friend function can access private members of the class
        */
        friend std::ostream& operator<<( std::ostream& os, const Point& p);

        friend void operator007(Point);
    
    public:

        Point();

        explicit Point(double x);

        Point(double x, double y);

        ~Point();

        int X() const;

        int Y() const;

        void X(int x);

        void Y(int y);

        std::string toString() const;

        double Distance() const;

        double Distance (const Point &p) const;

        Point operator+(const Point &p);

        Point operator-();

        Point operator*(double factor);

        Point& operator=(const Point &p);

        bool operator==(const Point &p);

        Point& operator*=(double factor);

};

#endif