#ifndef ARRAY_H
#define ARRAY_H

class Array {
private:
    int* data;
    int size;
    int capacity;
    int stepSize;
    int currentIndex;

    void expandArray(); // Private function to expand the array internally

public:
    Array(int initialSize = 10, int stepSize = 5);
    ~Array();
    void showElements() const;
    int getSize() const;
    int getElemSize() const;
    void setValue(int val);
    void setArray(int* pArr, int size);
};

#endif // ARRAY_H
