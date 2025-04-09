
SRCS = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp,%.out,$(SRCS))

all: $(PROGS)
	./$(PROGS)
	
%.out: %.cpp
	g++ $< -o $@ 

clean:
	rm -f $(PROGS)
