BUILD=../../build
CPP = g++
CFLAGS = 

main: Vtest.cpp Vectors.o Vectors.cpp
	  $(CPP) $(CFLAGS) -o $(BUILD)/vectors Vtest.cpp Vectors.o

Vectors.o: Vectors.h Vectors.cpp
	  $(CPP) $(CFLAGS) -c Vectors.cpp

clean:
	rm -f *.o;
	rm -f Vtest;
	rm -f *~;
