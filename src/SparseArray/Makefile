BUILD=../../build
CPP = g++
CFLAGS = 

main: Stest.cpp SparseArray.o SparseArray.cpp 
	  $(CPP) $(CFLAGS) -o $(BUILD)/sparse Stest.cpp SparseArray.o

SparseArray.o: SparseArray.h SparseArray.cpp
	  $(CPP) $(CFLAGS) -c SparseArray.cpp

Node.o: Node.h Node.cpp
	  $(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f Vtest;
	rm -f *~;
