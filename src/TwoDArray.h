#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__


template <typename T>
class TwoDArray {
 private:  
  T numRows;
  T numColumns;
  T** theArray;
  
 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  T access(int r, int c);
  void print();
  void insert(int r, int c,T def);
  void remove(int r, int c);
  int getNumRows();
  int getNumCols();

};

#endif
