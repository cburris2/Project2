CPP = g++
CFLAGS = -Wall -Wextra -Werror

TwoDArray.o:TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp 

twoD_test:TwoDArray.cpp TwoDArray.o
      $(CPP) $(CFLAGS) -o twoDtest $^

test: node_test.cpp Node.o LinkedList.o
	$(CPP) $(CFLAGS) -o test $^

LinkedList.o: Node.o LinkedList.h LinkedList.cpp
	$(CPP) $(CFLAGS) -c LinkedList.cpp

Node.o: Node.h Node.cpp
	$(CPP) $(CFLAGS) -c Node.cpp

clean:
	rm -f *.o;

	rm -f *~;
