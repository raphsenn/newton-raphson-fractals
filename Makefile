
all: main

main: complex.o main.o 

complex.o: complex.cpp
	g++ -c complex.cpp

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f main
	rm -f fractal.ppm
	rm -f *.o
