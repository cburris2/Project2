BUILD = ../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: TwoDArray Vectors SparseArray 
	  

TwoDArray: TwoDArray/TwoDArray.cpp TwoDArray/TwoDArray.o
	cd TwoDArray; $(MAKE)
	
Vectors: Vectors/Vectors.cpp Vectors/Vectors.o 
	cd Vectors; $(MAKE)

/* SparseArray: SparseArray/SparseArray.cpp SparseArray/SparseArray.o */

clean:
	rm -f *.o;
	rm -f twoDtest;
	rm -f *~;
