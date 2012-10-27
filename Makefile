BUILD = ./build
TEST = ./test
LIB = ./lib
SRC = ./src

CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: main test  

main:
	  cd $(SRC); $(MAKE);
	  
test:   
	  cd $(TEST); $(MAKE);

clean:
	cd $(SRC); $(MAKE) clean
	cd $(TEST); $(MAKE) clean
