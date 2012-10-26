#include "Node.h"
#include "SparseArray.h"


template <typename T>
SparseArray<T>::SparseArray(int m, int n, T def){
    numRows = m;
    numColumns = n;
    defValue = def;
    rows = new Node<T>(numRows);
    cols = new Node<T>(numColumns);



}
template <typename T>
SparseArray<T>::~SparseArray(){


}

template <typename T>
void SparseArray<T>::insert(int m, int n, T value){




}

template <typename T>
void SparseArray<T>::remove(int m, int n){




}

template <typename T>
void SparseArray<T>::print(){


}

template <typename T>
T SparseArray<T>::access(int m, int n){





}

template <typename T>
int SparseArray<T>::getNumRows(){


}


template <typename T>
int SparseArray<T>::getNumCols(){



}

//template class SparseArray<int>;
//template class SparseArray<double>;
