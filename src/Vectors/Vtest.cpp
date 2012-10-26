#include "Vectors.h"
#include <iostream>
#include <string>




int main(){
    
    Vectors<int>* ta = new Vectors<int>(25,25,0);
    ta->insert(10,10, 5);
    
    ta->remove(10,10);

    ta->print();
     for (int i=0; i<=10; i++) {
	  for (int j=10; j>=0; j--){

	  
		ta->insert(i,j,7);
	  
	  }
    }
    
  //  ta->insert(24,24,3); 
    ta->remove(24,24);
    ta->print();
  
    std::cout << "\n" << ta->access(0,3) << std::endl;
    std::cout << ta->getNumRows() << std::endl;
    std::cout << ta->getNumCols() << std::endl; 
    
    
    Vectors<std::string>* sa = new Vectors<std::string>(4,4,"world");
    sa->print();
    sa->insert(1,1,"hello");
    sa->print();
    sa->remove(1,1);

    Vectors<double>* da = new Vectors<double>(3,3,4.5);
    da->print();
    da->insert(0,0,7.9);
    da->print();
    da->insert(0,1,9.1);
    da->print();
    da->remove(0,0);
    da->print();



return 0;


}
