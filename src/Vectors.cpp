#include "Vectors.h"
#include <iostream>
#include <vector>
#include <assert.h>
#include <string>


template <typename T>
Vectors<T>::Vectors(int r, int c, T def)  {
	  numRows = r;
	  numC = c;
	  defValue = def;
   ////int** theVector = new T*(r);
     
   std::vector< std::vector<T> > theMatrix;
	 // std::vector< std::vector<T> > theMatrix(r, std::vector<T>(c));  
    for(int i=0; i<r; i++) {
	 std::vector<T> row;
	  for(int j=0; j<c; j++){

		r.push_back(i*j);

	  }
	  theMatrix.push_back(row);
    }
    
   // theMatrix(r,c)->defValue;
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


    theMatrix[r][c] = value;


}

template <typename T>
void Vectors<T>::remove(int r, int c) {

 

   


}

template <typename T> 
void Vectors<T>::print(){


	std::cout << "[";
	std::cout << " ";
	for (int i=0; i<=numRows-1; i++) {
	  for(int j=numColumns-1; j>=0; j--){

    		std::cout << theMatrix[i][j]; 
		std::cout << " ";
	  }
      }
      std::cout << "]" << std::endl;
	
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

template class <vector <vector <T>>;


