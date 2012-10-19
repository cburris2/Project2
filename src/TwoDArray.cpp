#include "Node.h"
#include "TwoDArray.h"
#include <iostream>
#include <string>


template <typename T>
TwoDArray<T>::TwoDArray(int r, int c,int def){

 //int** array = new int*[r][c];
int** array = new int*[r];
 	for (int i =0; i< 10; i++){
	  array[i] = new int[c]; 
	 
	}
//array.fill(def);

}

template <typename T>
~TwoDArray<T>::TwoDArray() {
	delete[] array;
}


template <typename T> 
void TwoDArray<T>::insert(int r, int c, T value){
  //assert(!array.empty());
  int* k = getNumRows();
  int* x = getNumCols();
    array[k+1][x+1] = value;	
    
} 

template <typename T>
T access(int r, int c){
  std::cout << array.at(r,c); << std::endl;

}

template <typename T>
void TwoDArray<T>::remove (int r, int c){
  

}

template <typename T>
int TwoDArray<T>::getNumRows() {
  	
  return 0;

}

<template typename T>
int TwoDArray<T>::getNumCols(){

  return 0;
}


