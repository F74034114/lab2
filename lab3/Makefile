1: Clock.o 1.o
	g++ -o 1 1.o Clock.o

Clock.o: Clock.cpp Clock.h
	g++ -c Clock.cpp

1.o: 1.cpp Clock.h
	g++ -c 1.cpp
clean:
	rm Clock *.o

