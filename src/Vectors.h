#ifndef __VECTORS_H__
#define __VECTORS_H__


template <typename T>
class Vectors {
    private:
     T numRows;
     T numColumns;
     T** theVector;
     T defValue;

    public:
     Vectors<T>(int r, int c, T def);
     ~Vectors<T>();
     void insert(int r, int c, T def);
     void remove(int r, int c);
     void print();
     T access(int r, int c);
     int getNumRows();
     int getNumCols();

};
