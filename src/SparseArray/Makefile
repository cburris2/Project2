BUILD=../../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror

sparse: Stest.cpp SparseArray.o Node.o 
	  $(CPP) $(CFLAGS) -o $(BUILD)/sparse Stest.cpp SparseArray.o Node.o

SparseArray.o: SparseArray.h SparseArray.cpp
	  $(CPP) $(CFLAGS) -c SparseArray.cpp

Node.o: Node.h Node.cpp
	  $(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f sparse;
	rm -f *~;
