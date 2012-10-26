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
      
	theVector->insert(theVector->begin()+i, new vector<T>(numColumns));
    
    }

    
    for(int i=0; i< numRows; i++) {
	 for(int j=0; j<numColumns; j++){
	  
	  (*theVector)[i]->insert((*theVector)[i]->begin()+j,defValue);
	 
	 }


    } 

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
 
   // theVector->at(r)->at(c)->push_back(value);    
   // vector<T>* v = theVector->at(r);

    //v->push_back(value); 

    /*typename std::vector<T>::iterator elt = v->begin();
    std::cout << "about to set up iterator" << std::endl;
    for(int i = 0; i < c; ++i) {
	  elt++;
	  }*/
    (*theVector)[c]->insert((*theVector)[c]->begin()+c,value);



    
   

}

template <typename T>
void Vectors<T>::remove(int r, int c) {
  
 
    
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
   
    
    (*theVector)[c]->insert((*theVector)[c]->begin()+c,defValue);


// std::cout << "the vector at 0: " << theVector->at(10)->at(10) << std::endl;
}

template <typename T> 
void Vectors<T>::print(){

 // typename vector<T>::iterator outter = theVector[r]->begin() ;
 // typename vector<T>::iterator inner = begin() 
	std::cout << "[";
	std::cout << " ";
	for (int i=0; i<=numRows-1; i++) {
	  for(int j=numColumns-1; j>=0; j--){

    		std::cout << theVector->at(i)->at(j) << " "  ;
		
	  }
      }
      std::cout << "]" << std::endl;
	
}


template <typename T>
T Vectors<T>::access(int r, int c) {

  
      assert(r >= 0 && r <= numRows-1);//assert that r is in range. 
	assert(c >= 0 && c <= numColumns-1);//assert that c is in range.
	 
	    return theVector->at(r)->at(c); 

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
template class Vectors<std::string>;
