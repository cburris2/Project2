BUILD = ../build
TEST = ../test
LIB = ../lib
SRC = ../src
GTEST = $(LIB)/gtest-1.6.0
GTEST_MAINA = $(GTEST)/make/gtest_main.a
GTEST_INCLUDES = -I$(GTEST) -I$(GTEST)/include
CPP = g++
CFLAGS = -Wall -Wextra -Werror



unit_test: unit_test.cpp $(SRC)/TwoDArray/TwoDArray.o $(GTEST_MAINA)
	  $(CPP) $(CFLAGS) $(GTEST_INCLUDES) -pthread -o unit_test unit_test.cpp $(SRC)/TwoDArray/TwoDArray.o $(GTEST_MAINA)

$(GTEST_MAINA): $(GTEST)/src/*.cc $(GTEST)/src/*.h
		cd $(GTEST)/make; make


clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
