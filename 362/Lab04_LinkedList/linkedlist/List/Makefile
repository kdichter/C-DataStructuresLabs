CXX := g++
CXXFLAGS := -std=c++17 -g
LINK.o := $(CXX) $(CXXFLAGS)

.PHONY: all clean

all : ListDriver

ListDriver : ListDriver.o

ListDriver.o : ListDriver.cc List.hpp

clean :
	rm -f ListDriver
