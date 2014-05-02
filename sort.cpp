#include "array.h"
#include <iostream>

using namespace std;

template<typename T>
SortableArray<T>::SortableArray(int s) {
    maxSize = s;
    size = 0;
    array = new T[maxSize];
}
template<typename T>
SortableArray<T>::~SortableArray() {
    delete array;
    size = 0;
    maxSize = 0;
}
template<typename T>
void SortableArray<T>::pushBack(T a) {
    array[size] = a;
    size++;
}
template<typename T>
void SortableArray<T>::sort() {
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size; j++) {
            if (array[i] > array[j]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}
template<typename T>
void SortableArray<T>::printArray() {
    for (int i = 0; i < size-1; i++) {
        cout << array[i] << " ";
    }
    cout << array[size-1];
    cout << endl;
}
template class SortableArray<int>;
