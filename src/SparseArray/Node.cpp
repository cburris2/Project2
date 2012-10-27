#include "Node.h"
#include <string>

template <typename T>
Node<T>::Node(int r, int c, T v) {
    value = v;
    nextRow = 0;
    nextCol = 0;
    nodeRows = r;
    nodeCols = c;

}

template <typename T>
T Node<T>::getValue(){
    
    return value;

}


template <typename T>
Node<T>*& Node<T>::getNextRows() {


    return nextRow;

}

template <typename T>
Node<T>*& Node<T>::getNextCols() {


    return nextCol;
}


template <typename T>
void Node<T>::setNextRow(Node<T>& n) {

    nextRow = &n;

}

template <typename T>
void Node<T>::setNextCol(Node<T>& n) {

    nextCol = &n;

}

int Node<T>::getNumRows() {


    return nodeRows;
}

int Node<T>::getNumCols() { 

    return nodeCols;

}


template class Node<int>;
template class Node<double>;
template class Node<std::string>;

