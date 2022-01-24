
SRCS = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp,%.out,$(SRCS))

all: $(PROGS)
	
%.out: %.cpp
	g++ $< -libboost -o $@ 

clean:
	rm -f $(PROGS)
