BUILD = ../../build
CPP = g++
CFLAGS = -Wall -Wextra -Werror

main: twoD_test.cpp TwoDArray.o TwoDArray.cpp
	  $(CPP) $(CFLAGS) -o $(BUILD)/twoDtest twoD_test.cpp TwoDArray.o
	
TwoDArray.o: TwoDArray.h TwoDArray.cpp
	$(CPP) $(CFLAGS) -c TwoDArray.cpp
	
clean:
	rm -f *.o;
	rm -f twoDtest;
	rm -f *~;
