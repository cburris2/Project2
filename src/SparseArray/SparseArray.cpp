#include "SparseArray.h"
#include <string>


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
    delete[] rows;
    delete[] cols;
 
    for(int i=0; i<numRows; i++) {

	 delete[] rows[i];
	  
    }

    for (int i=0; i<numColumns; i++) {
	  
	 delete[] cols[i];
	  

    }
    

}

template <typename T>
void SparseArray<T>::insert(int r, int c, T value){
    Node<T>** currR = &rows[r];
    Node<T>** currC = &cols[c]; 

    while(*currR != 0 && (*currR)->getNumRows()< r) {


    	  currR=&((*currR)->getNextRow());       
    
    }
    while(*currC !=0  && (*currC)->getNumCols() < c) {


	  currC=&((*currC)->getNextCols());
    }

    //Node<T>* temp = new Node<T>(r,c,value);
    //temp->setNext((**currR));

    *currR=temp;
}

*/

template <typename T>
void SparseArray<T>::remove(int r, int c){

    


}

template <typename T>
void SparseArray<T>::print(){


}

template <typename T>
T SparseArray<T>::access(int r, int c){





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
//template class SparseArray<double>;
//template class SparseArray<std::string>;
