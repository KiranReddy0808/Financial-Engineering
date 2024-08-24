#include <iostream>
#include "points.hpp"

using namespace std;

int main () {
    
        Point p (1);

        if( p == (Point)1.0) {
            cout << "Equal" << endl;
        } else {
            cout << "Not equal" << endl;
        }

        return 0;
}