#include "Vectors.h"
#include "assert.h"
#include <iostream>
#include <vector>
#include <string>
using std::vector;

template <typename T>
Vectors<T>::Vectors(int r, int c, T def)  {
    numRows = r;
    numColumns = c;
    defValue = def;
    
    theVector= new vector< vector<T>* >(numRows); 
	 
    
    for(int i=0; i<numRows; i++){
      theVector->push_back(new vector<T>(numColumns));
    }

   // vector< vector<T>* >*<T>::iterator it;
   // it->theVector.begin();
    /*for(it = theVector->begin();
	it != theVector->end();
	it++) {
      (*it)->push_back(new vector<T>(numColumns);
      }*/
    
   // (*theVector)->
    



/*
    for (int i=0; i<=numRows-1; i++) {
      for (int j=numColumns-1; j>=0; j--){

	*theVector[i][j]->push_back(defValue);
    
      }
    }*/
	    
    
}

template <typename T>
Vectors<T>::~Vectors(){

  for (int i=0; i<numRows; i++){
	  delete[] (*theVector)[numRows];

	  }

}


template <typename T>
void Vectors<T>::insert(int r, int c, T value){
    assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
    assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
 
        

   // (*theVector)[r][c]=value;
    
   // theVector[r][c]->push_back(value); -> causing seg fault
   

}

template <typename T>
void Vectors<T>::remove(int r, int c) {
  
 
    
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
   

	theVector[r][c]->push_back(defValue); 


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

  /*
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
   
	return theVector[r][c]; */

}


template <typename T>
int Vectors<T>::getNumRows(){
  /*
    return numRows;
  */
}

template <typename T>
int Vectors<T>::getNumCols(){
  /*
    return numColumns;
  */
}


template class Vectors<int>;
template class Vectors<double>;
template class Vectors<std::string>;
