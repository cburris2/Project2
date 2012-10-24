#ifndef __VECTORS_H__
#define __VECTORS_H__

#include <vector>

template <typename T>
class Vectors {
   private:
     int numRows;
     int numColumns;
     std::vector< std::vector<T> > theVector;
     T defValue;

   public:
     Vectors<T>(int r, int c, T def);
     ~Vectors<T>();
     void insert(int r, int c, T value);
     void remove(int r, int c);
     void print();
     T access(int r, int c);
     int getNumRows();
     int getNumCols();

};
#endif
