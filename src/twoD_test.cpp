#include <iostream>
#include "TwoDArray.h"


int main(){
    
    std::cout << "inside main---" << std::endl;
    TwoDArray<int>* ta = new TwoDArray<int>(2,2,0);
    std::cout <<"\n" << "created array---" << std::endl;
    ta->print();
    ta->access(0,0);
    ta->insert(0,0,3); 
    
    ta->print();
    //std::cout << "\n" << ta->insert(0,0,3) << std::endl;



return 0;


}
