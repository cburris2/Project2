#include "TwoDArray.h"
#include <iostream>
#include <string>
#include <assert.h>
	

template <typename T>
TwoDArray<T>::TwoDArray(int r, int c,T def){
	numRows = r;
	numColumns = c;
      defValue = def;	
     // std::cout << "in constructor---" <<std::endl;	
      theArray = new T*[r];
	
	for (int i=0; i<numColumns; i++){
		theArray[i] = new T[c]; 
	 
	}

      for (int i=0; i<=numRows-1; i++) {
	  for (int j=numColumns-1; j>=0; j--){

		theArray[i][j] = defValue;


	  }

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
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
       
      theArray[r][c]=value;	
		

} 


template <typename T>
void TwoDArray<T>::remove(int r, int c){

	
      assert(r >= 0 && r <= numRows-1);
      assert(c >= 0 && c <= numColumns-1);
	
	  theArray[r][c] = defValue; 

}


template <typename T>
void TwoDArray<T>::print() {
    	
	for (int i=0; i<=numRows-1; i++) {
        std::cout << "[";
	  std::cout << " ";
	  for(int j=numColumns-1; j>=0; j--){

    		std::cout << theArray[i][j]; 
		std::cout << " ";
	  }

          std::cout << "]" << std::endl;

      }
}

template <typename T>
T TwoDArray<T>::access(int r, int c){

	  //T aValue=theArray[r][c];
      
	return theArray[r][c]; 
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
template class TwoDArray<double>;
template class TwoDArray<std::string>;
