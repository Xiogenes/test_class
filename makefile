CPP				= g++
CPPFLAGS		= -g -Wall -o main -std=c++11

all:			*.h	*.cpp 
				$(CPP) $(CPPFLAGS) *.cpp 