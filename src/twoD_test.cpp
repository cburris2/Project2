#include <iostream>

#include "TwoDArray.h"

int main(){

    TwoDArray<int>* ta = new TwoDArray<int>(2,2,8);

    ta->insert(1,1,3);

return 0;
}
