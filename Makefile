BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: $(BUILD)/main $(TEST)/twoDtest

main: Vectors.o 
	  $(CPP) $(CFLAGS) -o vectors

$(BUILD)/main: $(SRC)/TwoDArray/twoD_test.cpp $(SRC)/TwoDArray/TwoDArray.cpp $(SRC)/TwoDArray/TwoDArray.o $(SRC)/Vectors/Vectors.cpp $(SRC)/Vectors.o
	   

$(TEST)/twoDtest: $(TEST)/TwoDArray/TwoDArray.cpp $(SRC)/TwoDArray/TwoDArray.o

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
