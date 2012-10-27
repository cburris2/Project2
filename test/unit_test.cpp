#include "../src/TwoDArray/TwoDArray.h"
#include "../src/Vectors/Vectors.h"
#include "../src/SparseArray/SparseArray.h"
#include "gtest/gtest.h"
#include <string>

using std::string;


/* Start TwoDArray test for type integer */
TEST(TwoDArray, insert){
    TwoDArray<int>* ta = new TwoDArray<int>(10,10,0);
    
    ta->insert(0,0,1);

    ta->insert(0,1,2);
    ta->insert(1,0,3);

    EXPECT_EQ(1, ta->access(0,0));

    delete ta;

}


TEST(TwoDArraya, access){
    TwoDArray<int>* aa = new TwoDArray<int>(10,10,0);
    
    aa->insert(0,0,5);
    
    EXPECT_EQ(5, aa->access(0,0));

    delete aa;

}



TEST(TwoDArrayr, remove){
    TwoDArray<int>* ra = new TwoDArray<int>(10,10,0);
    
    ra->insert(0,0,1);

    ra->remove(0,0);
    ra->insert(1,0,3);

    EXPECT_EQ(0, ra->access(0,0));

    delete ra;

}



TEST(TwoDArrayp, print){
    TwoDArray<int>* ra = new TwoDArray<int>(1,1,0);
    
    ra->insert(0,0,8);

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted #8 at index 0,0 ----- ]"
    << std::endl;
    ra->print();
    
    delete ra;


}


TEST(TwoDArrayg, getNumRows){
    TwoDArray<int>* ga = new TwoDArray<int>(10,10,0);
    
    ga->insert(0,0,2);
    

    EXPECT_EQ(10, ga->getNumRows());

    delete ga;


}


TEST(TwoDArrayg, getNumCols){
    TwoDArray<int>* gc = new TwoDArray<int>(10,10,0);
    
    gc->insert(0,0,2);

    EXPECT_EQ(10, gc->getNumCols());

    delete gc;

}


/* Start TwoDArray test for type double */



TEST(TwoDArray_double, insert){
    TwoDArray<double>* da = new TwoDArray<double>(10,10,0);
    
    da->insert(0,0,1);

    da->insert(0,1,2);
    da->insert(1,0,3);

    EXPECT_EQ(1, da->access(0,0));

    delete da;

}


TEST(TwoDArray_doublea, access){
    TwoDArray<double>* daa = new TwoDArray<double>(10,10,0);
    
    daa->insert(0,0,5);
    
    EXPECT_EQ(5, daa->access(0,0));

    delete daa;

}



TEST(TwoDArray_doubler, remove){
    TwoDArray<double>* dra = new TwoDArray<double>(10,10,0);
    
    dra->insert(0,0,1);

    dra->remove(0,0);
    dra->insert(1,0,3);

    EXPECT_EQ(0, dra->access(0,0));

    delete dra;

}



TEST(TwoDArray_doublep, print){
    TwoDArray<double>* dpa = new TwoDArray<double>(1,1,0.5);
    
    dpa->insert(0,0,8.8);

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted #8 at index 0,0 ----- ]"
    << std::endl;
    dpa->print();
    
    delete dpa;


}


TEST(TwoDArray_doubleg, getNumRows){
    TwoDArray<double>* dga = new TwoDArray<double>(10,10,0);
    
    dga->insert(0,0,2);
    

    EXPECT_EQ(10, dga->getNumRows());

    delete dga;


}


TEST(TwoDArray_doublegc, getNumCols){
    TwoDArray<double>* dgc = new TwoDArray<double>(10,10,0);
    
    dgc->insert(0,0,2);

    EXPECT_EQ(10, dgc->getNumCols());

    delete dgc;

}



TEST(TwoDArray_str, insert){
    TwoDArray<string>* sa = new TwoDArray<string>(10,10,"0");
    
    sa->insert(0,0,"1");

    sa->insert(0,1,"2");
    sa->insert(1,0,"3");

    EXPECT_EQ("1", sa->access(0,0));

    delete sa;

}


TEST(TwoDArray_stra, access){
    TwoDArray<string>* saa = new TwoDArray<string>(10,10,"0");
    
    saa->insert(0,0,"hi");
    
    EXPECT_EQ("hi", saa->access(0,0));

    delete saa;

}



TEST(TwoDArray_strr, remove){
    TwoDArray<string>* sra = new TwoDArray<string>(10,10,"0");
    
    sra->insert(0,0,"1");

    sra->remove(0,0);

    EXPECT_EQ("0", sra->access(0,0));

    delete sra;

}



TEST(TwoDArray_strp, print){
    TwoDArray<string>* spa = new TwoDArray<string>(1,1,"i love c++");
    
    spa->insert(0,0,"hello TwoDArray!");

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted hello TwoDArray at index 0,0 ----- ]"
    << std::endl;
    spa->print();
    
    delete spa;


}


TEST(TwoDArray_strg, getNumRows){
    TwoDArray<string>* sga = new TwoDArray<string>(10,10,"0");
    
    sga->insert(0,0,"2");
    

    EXPECT_EQ(10, sga->getNumRows());

    delete sga;


}


TEST(TwoDArray_strgc, getNumCols){
    TwoDArray<string>* sgc = new TwoDArray<string>(10,10,"0");
    
    sgc->insert(0,0,"2");

    EXPECT_EQ(10, sgc->getNumCols());

    delete sgc;

}

