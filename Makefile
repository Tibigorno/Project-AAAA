
SHELL   =/bin/bash
CXX     =clang++
MKDEP   =g++ -MM

CXXFLAGS=-W -Wall -pedantic
LDFLAGS =-lsfml-graphics -lsfml-window -lsfml-system

EXEC    =main
SRC     = $(wildcard *.cpp)
#OBJ     = main.o
OBJ     =$(SRC:.cpp=.o)


all     :: $(EXEC)

$(EXEC) : $(OBJ)
	@$(CXX) -o $@ $^ $(LDFLAGS)

%.o     : %.cpp
	@$(CXX) -o $@ -c $< $(CXXFLAGS)

.PHONY  : clean mrproper

clean   ::
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)

.depend :
	$(MKDEP) *.cpp > .depend

-include .depend
