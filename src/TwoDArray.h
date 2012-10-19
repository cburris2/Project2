#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__

#include "Node.h"

template <typename T>
class TwoDArray {
 private:
  Node<T>* row;
  Node<T>* col;


 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  T access(int r, int c);
  void print();
  void insert(int r, int c, int def);
  void remove(int r, int c);
  int getNumRows();
  int getNumCols();

};

#endif
