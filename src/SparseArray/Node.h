#ifndef __NODE_H__
#define __NODE_H__

template <typename T>
class Node {
    private:
     T value;
     Node<T>* nextRow;
     Node<T>* nextCol;
     int nodeRows;
     int nodeCols;

    public:
     Node<T>(int r,int c,T v);
     T getValue();
     Node*& getNextRow();
     Node*& getNextCols();
     void setNextRow(Node<T>& n);
     void setNextCol(Node<T>& n);
     int getNumRows();
     int getNumCols();

};
#endif
