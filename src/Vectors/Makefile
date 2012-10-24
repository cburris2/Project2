CPP = g++
CFLAGS = -Wall -Wextra -Werror

main: Vectors.o 
	  $(CPP) $(CFLAGS) -o vectors

Vtest: Vectors.cpp Vectors.o
	  $(CPP) $(CFLAGS) -o Vtest $^ 

Vectors.o: Vectors.h Vectors.cpp
	  $(CPP) $(CFLAGS) -c Vectors.cpp
	
clean:
	rm -f *.o;
	rm -f Vtest;
	rm -f *~;
