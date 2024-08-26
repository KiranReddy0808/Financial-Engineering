#include "points.hpp"
#include <ostream>
#include <string>
#include <iostream>

#ifndef ARRAY_H
#define ARRAY_H

using namespace Kiran::CAD;

namespace Kiran {
    namespace Containers {
        class Array {
            private:
                Point* m_data;
                int arr_size;
            
            public:

                /* Default constructor*/
                Array();

                /* Destructor*/
                ~Array();

                /* Constructor with size */
                Array(int size);

                /* Constructor with a default point and assigned size */
                Array(Point point, int size);

                /* Copy constructor */
                Array(const Array& arr);

                /* Assignment operator */
                Array& operator=(const Array& arr);

                /* Return size of the array*/
                int Size();

                /* Return in string format*/
                std::string toString() const;

                friend std::ostream& operator <<( std::ostream& os, const Array& arr);

                /* Set Element*/
                void setElement(int index, Point point);

                /* Get Element*/
                Point getElement(int index);

                /*operator[]*/
                Point& operator[](int index);


        };
    }
}




#endif