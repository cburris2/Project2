#ifndef __TWODARRAY_H__
#define __TWODARRAY_H__


template <typename T>
class TwoDArray {
 private:  
  int numRows;
  int numColumns;
  T** theArray;
  T defValue;
  
 public:
  TwoDArray<T>(int r, int c, T def);
  ~TwoDArray<T>();
  void insert(int r, int c,T def);
  void remove(int r, int c);
  void print();  
  T access(int r, int c);
  int getNumRows();
  int getNumCols();

};

#endif
