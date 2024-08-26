#include "array.hpp"

using namespace std;

Array::Array() {
    m_data = new Point[10];
    arr_size = 10;
}

Array::Array(int size) {
    m_data = new Point[size];
    arr_size = size;
}

Array::~Array() {
    delete[] m_data;
}

Array::Array(const Array& arr) {
    m_data = new Point[arr.arr_size];
    arr_size = arr.arr_size;
    for(int i=0; i<arr.arr_size; i++) {
        m_data[i].operator=(arr.m_data[i]); 
    }
}

Array::Array( Point point, int size) {
    m_data = new Point[size];
    arr_size = size;
    for(int i=0; i< size; i++) {
        m_data[i].operator=(point);
    }
}



Array& Array::operator = (const Array& source) {

    if(m_data == source.m_data && arr_size == source.arr_size) {
        return *this;
    }

    delete[] m_data;
    m_data = new Point[source.arr_size];
    arr_size = source.arr_size;
    for(int i=0; i<source.arr_size; i++) {
        m_data[i].operator=(source.m_data[i]);
    }
    return *this;
}

int Array::Size() {
    return arr_size;
}

std::string Array::toString() const {
    string str = "Size of array is " + to_string(arr_size) + ". [";
    for(int i=0; i<arr_size; i++) {
        str += m_data[i].toString() +',';
    }
    str += ']';

    return str;

}

std::ostream& operator<<( std::ostream& os, const Array& arr) {
    
    os << arr.toString() << endl;
    return os;
}

void Array::setElement(int index, Point point) {
    if(index < arr_size) {
        m_data[index].operator=(point);
    }
}

Point Array::getElement(int index) {
    
    return (index < arr_size && index > 0) ? m_data[index] : m_data[0];
}

Point &Array::operator[](int index)
{
    return (index < arr_size && index > 0) ? m_data[index] : m_data[0];
}


