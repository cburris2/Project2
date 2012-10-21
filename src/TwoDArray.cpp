#include "TwoDArray.h"
#include <iostream>
#include <string>
#include <assert.h>
	

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c,T def){
	numRows = r;
	numColumns = c;
      defValue = def;	
      std::cout << "in constructor---" <<std::endl;	
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
	delete[] theArray;
}


template <typename T> 
void TwoDArray<T>::insert(int r, int c, T value){
      int** inValue = &value; 
      **inValue = &value;
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
       
	theArray[r][c].value=inValue;
      std::cout << theArray.print() <<std::endl;	
      //val = theArray[r][c];	
	//theArray[r][c]->value;
	
      std::cout << "after v's set---" <<std::endl;	

} 


template <typename T>
void TwoDArray<T>::remove(int r, int c){

	
      assert(r >= 0 && r <= numRows-1);
	  /* <remove needs to replace the value at the r & c> */
	assert(c >= 0 && c <= numColumns-1);
	
     for (int i = 0; i<=numRows-1; i++){
	   theArray[i] = theArray[defValue]; 
     }

}


template <typename T>
void TwoDArray<T>::print() {
      //int cur = 0;
	std::cout << "[";
	for(int i=0; i<numRows; i++) {
	std::cout << theArray[i][i]; //.value 
      
      }
      std::cout << "]" << std::endl;
}

template <typename T>
T TwoDArray<T>::access(int r, int c){

	int aValue = r + c; //theArray[r][c].value;

	
	return aValue;  //**aValue;
}

template <typename T>
int TwoDArray<T>::getNumRows() {

      return numRows;

}

template <typename T>
int TwoDArray<T>::getNumCols(){

      return numColumns;
}

template class TwoDArray<int>;
