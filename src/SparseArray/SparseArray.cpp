#include "SparseArray.h"
#include <string>
#include <iostream>

template <typename T>
SparseArray<T>::SparseArray(int r, int c, T def){
    numRows = r;
    numColumns = c;
    defValue = def;
    rows = new Node<T>*[r];
    cols = new Node<T>*[c];
    
    for(int i=0; i<r; i++) {

	  rows[i]=0;
	  
    }

    for (int i=0; i<c; i++) {
	  
	  cols[i]=0;
	  
    }


}

template <typename T>
SparseArray<T>::~SparseArray(){
    Node<T>* cur = rows[0]; 
    Node<T>* temp = cur;

    for(int i=0; i<numRows; i++){
	  cur = rows[i];
	  while(cur != 0 && cur->getNextRows() != 0){

		cur = cur->getNextRows();
		delete temp;

	  }

    }

}

template <typename T>
void SparseArray<T>::insert(int r, int c, T value){
    Node<T>** currR = &rows[r];
    Node<T>** currC = &cols[c]; 

    while(*currR != 0 && (*currR)->getNumRows()< r) {


    	  currR=&((*currR)->getNextRows());       
    
    }
    while(*currC !=0  && (*currC)->getNumCols() < c) {


	  currC=&((*currC)->getNextCols());
    }

    Node<T>* temp = new Node<T>(r,c,value);
    temp->setNextRow((**currR));

    *currR=temp;
}



template <typename T>
void SparseArray<T>::remove(int r, int c){

    insert(r,c,defValue);	  
    

}

template <typename T>
void SparseArray<T>::print(){

    
	std::cout << "[";
	std::cout << " ";
      for (int i=0; i<=numRows-1; i++) {
	  std::cout << "[";
	  std::cout << " ";
	  for(int j=numColumns-1; j>=0; j--){

    		std::cout << access(i,j); 
		std::cout << " ";
	  }

	  std::cout << "]";
 
      }

}

template <typename T>
T SparseArray<T>::access(int r, int c){
    
    Node<T>** temp = &rows[r];

    while(*temp != 0) {
      if ((*temp)->getNumRows() == r && (*temp)->getNumCols() == c) {
		return (*temp)->getValue();
      }
     temp = &((*temp)->getNextRows());
    }
    return defValue;

}


template <typename T>
int SparseArray<T>::getNumRows(){

    return numRows;
}


template <typename T>
int SparseArray<T>::getNumCols(){

    return numColumns;

}

template class SparseArray<int>;
template class SparseArray<double>;
template class SparseArray<std::string>;
