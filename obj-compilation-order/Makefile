
DRIVERS_DIR=./
SOURCES_DIR=./
BUILD_DIR=build/


DRIVERS_INCLUDE=-I$(DRIVERS_DIR)
SOURCES_INCLUDE=-I$(SOURCES_INCLUDE)

SRC=hello.cpp goodbye.cpp outputter.cpp
OBJ=hello.o goodbye.o outputter.o
DVR=main.cpp
DVR_OBJ=main.o
OUT=main.out
#SRC=$(wildcard $(SOURCES_DIR)*.cpp)
#OBJ=$(patsubst $(SOURCES_DIR)%.cpp,$(BUILD_DIR)%.o,$(SRC))
#DVR=$(wildcard $(DRIVERS_DIR)*.cpp)
#DVR_OBJ=$(patsubst $(DRIVERS_DIR)%.cpp,%.o,$(DVR))
#OUT=$(patsubst $(DRIVERS_DIR)%.cpp,%.out,$(DVR))

all: $(OBJ) $(DVR_OBJ) $(OUT)
	echo $(SRC)
	echo $(OBJ)
	echo $(DVR)
	echo $(DVR_OBJ)
	echo $(OUT)

$(OBJ): $(SRC)
	g++ -c $< -o $@

$(DVR_OBJ): $(DVR)
	g++ -c $< -o $@

$(OUT): $(DVR_OBJ)
	g++ $(OBJ) $< -o $@

clean:
	rm -rf *.o *.out
