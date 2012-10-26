#ifndef __SPARSEARRAY_H__
#define __SPARSEARRAY_H__

#include "Node.h"
template <typename T>
class SparseArray {
 private:  
  int numRows;
  int numColumns;
  T** theArray;
  T defValue;
  Node<T>** rows;
  Node<T>** cols;
  
 public:
  SparseArray<T>(int r, int c, T def);
  ~SparseArray<T>();
  void insert(int r, int c,T def);
  void remove(int r, int c);
  void print();  
  T access(int r, int c);
  int getNumRows();
  int getNumCols();

};

#endif
