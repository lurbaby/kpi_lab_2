#include "array.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>

Array::Array(int initialSize, int step) {
    if (initialSize <= 0) {
        initialSize = 10;
    }
    this->stepSize = stepSize > 0 ? stepSize : 5;
    this->size = initialSize;
    this->capacity = initialSize;
    this->currentIndex = 0;
    this->data = new int[this->size];
    std::fill_n(this->data, this->size, 0);
}

Array::~Array() {
    delete[] this->data;
}

void Array::showElements() const {
    for (int i = 0; i < this->currentIndex; ++i) {
        std::cout << this->data[i] << " ";
    }
    std::cout << std::endl;
}

int Array::getSize() const {
    return this->size;
}

int Array::getElemSize() const {
    return this->currentIndex;
}

void Array::setValue(int val) {
    if (this->currentIndex >= this->capacity) {
        expandArray();
    }
    this->data[this->currentIndex++] = val;
}

void Array::setArray(int* pArr, int size) {
    for (int i = 0; i < size; ++i) {
        setValue(pArr[i]);
    }
}

void Array::expandArray() {
    this->capacity += this->stepSize;
    int* newData = new int[this->capacity];
    std::copy(this->data, this->data + this->currentIndex, newData);
    delete[] this->data;
    this->data = newData;
}
