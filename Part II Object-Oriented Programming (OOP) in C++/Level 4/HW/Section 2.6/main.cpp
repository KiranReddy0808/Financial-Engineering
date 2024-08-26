#include <iostream>
#include "points.hpp"
#include "array.hpp"

using namespace std;

using namespace Kiran::Containers;
using namespace Kiran::CAD;

int main () {

    Array *array = new Array(Point(0), 9);

    cout << *array << endl;

    cout << "Size of array is " << (*array).Size() << endl;

    cout << "Element at index 5 is " << (*array)[5].toString() << endl;

    /* Set element at index 13 should be ignored*/
    (*array).setElement(13, Point(13, 13));

    /* Set element at index 5 should happen*/
    (*array).setElement(5, Point(5, 55));

    cout << "Element at index 5 is " << (*array)[5].toString() << endl;

    /* Return should be first element*/
    cout << "Element at index 13 is " << (*array).getElement(13).toString() << endl;

    return 0;

}