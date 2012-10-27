#include "SparseArray.h"
#include <iostream>
#include <string>




int main(){
    
   SparseArray<int>* ta = new SparseArray<int>(15,15,0);
    ta->insert(0,0,4);
    
    ta->print();
    std::cout << "access is next" << std::endl;
    std::cout << ta->access(0,0) << std::endl;
    
    for (int i=0; i<=14; i++) {
	  for (int j=14; j>=0; j--){

	  
		ta->insert(i,j,5);
	  
	  }
    }
    ta->insert(0,0,3); 
    ta->remove(0,0);
    ta->print();
  
    std::cout << "\n" << ta->access(0,3) << std::endl;
    std::cout << ta->getNumRows() << std::endl;
    std::cout << ta->getNumCols() << std::endl; 
    
    
    SparseArray<std::string>* sa = new SparseArray<std::string>(7,7,"C++");
    sa->print();
    sa->insert(1,1,"hello");
    sa->print();
    sa->access(1,1);
    sa->remove(1,1);
    sa->print();

    SparseArray<double>* da = new SparseArray<double>(2,2,4.5);
    std::cout << "\n" << ta->access(0,3) << std::endl;
    da->print();
    da->insert(0,0,7.9);
    da->print();
    da->insert(0,1,9.1);
    da->print();
    da->remove(0,1);

    da->print();
return 0;


}
