main:main.o bmi.o
	g++ -o main main.o bmi.o
main.o:main.cpp bmi.h
	g++ -c main.cpp
bmi.o:bmi.cpp bmi.h
	g++ -c bmi.cpp

