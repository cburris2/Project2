#include "Vectors.h"
#include "assert.h"
#include <iostream>
#include <vector>
#include <string>


template <typename T>
Vectors<T>::Vectors(int r, int c, T def)  {
	  numRows = r;
	  numColumns = c;
	  defValue = def;
   ////int** theVector = new T*(r);
     
  // std::vector< std::vector<T> > theMatrix;
	    
    for(int i=0; i<r; i++) {
	 std::vector<T> row;
	  for(int j=0; j<c; j++){

		row.push_back(i * j);
		 
	  }
       theVector.push_back(row);
    }
    
}

template <typename T>
Vectors<T>::~Vectors(){
/*
    for (int i=0; i<numRows; i++){
	  delete[] theMatrix;

    }
*/
}


template <typename T>
void Vectors<T>::insert(int r, int c, T value){

    
    assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
    assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
    
    theVector[r][c] = value;


}

template <typename T>
void Vectors<T>::remove(int r, int c) {

 
    
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
   
	  
	  theVector[r][c] = defValue; 

}

template <typename T> 
void Vectors<T>::print(){


	std::cout << "[";
	std::cout << " ";
	for (int i=0; i<=numRows-1; i++) {
	  for(int j=numColumns-1; j>=0; j--){

    		std::cout << theVector[i][j]; 
		std::cout << " ";
	  }
      }
      std::cout << "]" << std::endl;
	
}


template <typename T>
T Vectors<T>::access(int r, int c) {


      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
   
	return theVector[r][c]; 

}


template <typename T>
int Vectors<T>::getNumRows(){

    return numRows;

}

template <typename T>
int Vectors<T>::getNumCols(){

    return numColumns;

}


template class Vectors<int>;
template class Vectors<double>;
