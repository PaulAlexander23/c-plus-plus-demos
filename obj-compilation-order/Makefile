DRIVERS=main.cpp
SOURCES=hello.cpp goodbye.cpp


all: main.out

hello.o: hello.cpp
	g++ -c $^ -o $@

goodbye.o: goodbye.cpp
	g++ -c $^ -o $@

main.o: main.cpp
	g++ -c $^ -o $@

main.out: hello.o main.o goodbye.o
	g++ $^ -o $@

clean:
	rm -rf *.o *.out
