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


/* Start TwoDArray test for type string */

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



/* Start Vectors test for type integer */
TEST(Vectors, insert){
    Vectors<int>* va = new Vectors<int>(10,10,0);
    
    va->insert(0,0,1);

    va->insert(0,1,2);
    va->insert(1,0,3);

    EXPECT_EQ(1, va->access(0,0));

    delete va;

}
/*

TEST(Vectorsa, access){
    Vectors<int>* vaa = new Vectors<int>(10,10,0);
    
    vaa->insert(0,0,5);
    
    EXPECT_EQ(5, vaa->access(0,0));

    delete vaa;

}



TEST(Vectorsr, remove){
    Vectors<int>* vra = new Vectors<int>(10,10,0);
    
    vra->insert(0,0,1);

    vra->remove(0,0);
    vra->insert(1,0,3);

    EXPECT_EQ(0, vra->access(0,0));

    delete vra;

}



TEST(Vectorsp, print){
    Vectors<int>* vpa = new Vectors<int>(1,1,0);
    
   vpa->insert(0,0,8);

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted #8 at index 0,0 ----- ]"
    << std::endl;
    vpa->print();
    
    delete vpa;


}


TEST(Vectorsg, getNumRows){
    Vectors<int>* vga = new Vectors<int>(10,10,0);
    
    vga->insert(0,0,2);
    

    EXPECT_EQ(10, vga->getNumRows());

    delete vga;


}


TEST(Vectorsgc, getNumCols){
    Vectors<int>* vgc = new Vectors<int>(10,10,0);
    
    vgc->insert(0,0,2);

    EXPECT_EQ(10, vgc->getNumCols());

    delete vgc;

}
*/

/* Start Vectors test for type double */

/*

TEST(Vectors_double, insert){
    Vectors<double>* vda = new Vectors<double>(10,10,0);
    
    vda->insert(0,0,1);

    vda->insert(0,1,2);
    vda->insert(1,0,3);

    EXPECT_EQ(1, vda->access(0,0));

    delete vda;

}


TEST(Vectors_doublea, access){
    Vectors<double>* vdaa = new Vectors<double>(10,10,0);
    
    vdaa->insert(0,0,5);
    
    EXPECT_EQ(5, vdaa->access(0,0));

    delete vdaa;

}



TEST(Vectors_doubler, remove){
    Vectors<double>* vdra = new Vectors<double>(10,10,0);
    
    vdra->insert(0,0,1);

    vdra->remove(0,0);
    vdra->insert(1,0,3);

    EXPECT_EQ(0, vdra->access(0,0));

    delete vdra;

}



TEST(Vectors_doublep, print){
    Vectors<double>* vdpa = new Vectors<double>(1,1,0.5);
    
    vdpa->insert(0,0,8.8);

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted #8 at index 0,0 ----- ]"
    << std::endl;
    vdpa->print();
    
    delete vdpa;


}


TEST(Vectors_doubleg, getNumRows){
    Vectors<double>* vdga = new Vectors<double>(10,10,0);
    
    vdga->insert(0,0,2);
    

    EXPECT_EQ(10, vdga->getNumRows());

    delete vdga;


}


TEST(Vector_doublegc, getNumCols){
    Vectors<double>* vdgc = new Vectors<double>(10,10,0);
    
    vdgc->insert(0,0,2);

    EXPECT_EQ(10, vdgc->getNumCols());

    delete vdgc;

}

*/
/* Start Vectors test for type string */
/*
TEST(Vectors_str, insert){
    Vectors<string>* vsa = new Vectors<string>(10,10,"0");
    
    vsa->insert(0,0,"1");

    vsa->insert(0,1,"2");
    vsa->insert(1,0,"3");

    EXPECT_EQ("1", vsa->access(0,0));

    delete vsa;

}


TEST(Vectors_stra, access){
    Vectors<string>* vsaa = new Vectors<string>(10,10,"0");
    
    vsaa->insert(0,0,"hi");
    
    EXPECT_EQ("hi", vsaa->access(0,0));

    delete vsaa;

}



TEST(Vectors_strr, remove){
    Vectors<string>* vsra = new Vectors<string>(10,10,"0");
    
    vsra->insert(0,0,"1");

    vsra->remove(0,0);

    EXPECT_EQ("0", vsra->access(0,0));

    delete vsra;

}



TEST(Vectors_strp, print){
    Vectors<string>* vspa = new Vectors<string>(1,1,"i love c++");
    
    vspa->insert(0,0,"hello TwoDArray!");

    std::cout << "\n[ -----TwoDArray print test ----- ]" << std::endl;

    std::cout <<"[ ----- inserted hello TwoDArray at index 0,0 ----- ]"
    << std::endl;
    vspa->print();
    
    delete vspa;


}


TEST(Vectors_strg, getNumRows){
    Vectors<string>* vsga = new Vectors<string>(10,10,"0");
    
    vsga->insert(0,0,"2");
    

    EXPECT_EQ(10, vsga->getNumRows());

    delete vsga;


}


TEST(Vectors_strgc, getNumCols){
    Vectors<string>* vsgc = new Vectors<string>(10,10,"0");
    
    vsgc->insert(0,0,"2");

    EXPECT_EQ(10, vsgc->getNumCols());

    delete vsgc;

}

*/
