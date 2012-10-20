#include "TwoDArray.h"
#include <iostream>
#include <string>
	

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c,T def){
	numRows = r;
	numColumns = c;
      defValue = def;	
	int** theArray = new int*[r];
	for (int i =0; i<numColumns; i++){
		theArray[i] = new int[c]; 
	 
	}


}

template <typename T>
TwoDArray<T>::~TwoDArray() {


	for (int i =0; i< numRows; i++) { 
	 	delete[] theArray[i];
	//for loop to delete row array & col array


	}
}


template <typename T> 
void TwoDArray<T>::insert(int r, int c, T value){

	 int val=0;
	// assert that the row and col are in range. 
    
	 val = theArray[r][c];	
    
} 

template <typename T>
T TwoDArray<T>::access(int r, int c){

	int* aValue = theArray[r][c];

	
	return aValue;
}

template <typename T>
void TwoDArray<T>::remove(int r, int c){

	
	assert(r >= 0 && r <= numRows-1);

	//delete theArray[r][c];


}



template <typename T>
int TwoDArray<T>::getNumRows() {

  return numRows;

}

template <typename T>
int TwoDArray<T>::getNumCols(){

  return numColumns;
}


