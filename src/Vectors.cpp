#include "Vectors.h"
#include <iostream>
#include <vector>
#include <assert.h>

template <typename T>
Vectors<T>::Vectors(int r, int c, T def)  {
    numRows = r;
    numCols = c;
    defValue = def;



}

template <typename T>
Vectors<T>::~Vectors(){
    for (int i=0; i<numRows; i++){
	  delete[] theVector;

    }

}


template <typename T>
void Vectors<T>::insert(int r, int c, T value){





}

template <typename T>
void Vectors<T>::remove(int r, int c) {

 




}

template <typename T> 
void Vectors<T>::print(){



}


template <typename T>
T Vectors<T>::access(int r, int c) {



    return 0;

}


template <typename T>
int Vectors<T>::getNumRows(){

    return numRows;

}

template <typename T>
int Vectors<T>::getNumCols(){

    return numCols;

}


