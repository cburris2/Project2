CPP = g++
CFLAGS = -Wall -Wextra -Werror

twoDtest: twoD_test.cpp TwoDArray.o
	  $(CPP) $(CFLAGS) -o twoDtest $^ 

twoD_test.o: TwoDArray.h TwoDArray.cpp TwoDArray.o
	  	$(CPP) $(CFLAGS) -c twoD_test.cpp  
	
Vectors.o: Vectors.h Vectors.cpp
	  $(CPP) $(CFLAGS) -c Vectors.cpp

TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp
	
LinkedList.o: Node.o LinkedList.h LinkedList.cpp
	$(CPP) $(CFLAGS) -c LinkedList.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;
	rm -f twoDtest;
	rm -f *~;
