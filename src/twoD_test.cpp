#include <iostream>
#include "TwoDArray.h"


int main(){
    
    //std::cout << "inside main---" << std::endl;
    TwoDArray<int>* ta = new TwoDArray<int>(45,45,0);
    //std::cout <<"\n" << "created array---" << std::endl;
    ta->print();
   // std::cout << "access is next" << std::endl;
    std::cout << ta->access(0,0) << std::endl;
    for (int i=0; i<=44; i++) {
	  for (int j=44; j>=0; j--){

	  
		ta->insert(i,j,5);
	  
	  }
    }
    //ta->insert(0,0,3); 
    ta->print();
    ta->remove(0,0);
    ta->print();
    //std::cout << "\n" << ta->insert(0,0,3) << std::endl;
    std::cout << ta->getNumRows() << std::endl;
    std::cout << ta->getNumCols() << std::endl;
    
    
    TwoDArray<std::string>* sa = new TwoDArray<std::string>(2,2,"5");
    sa->print();
    sa->insert(1,1,"hello");
    sa->print();

    TwoDArray<double>* da = new TwoDArray<double>(2,2,4.5);
    da->print();
    da->insert(0,0,7.9);
    da->print();
    da->insert(0,1,9.1);
    da->print();
    da->remove(0,1);

    da->print();
return 0;


}
