
DRIVER_DIR=drivers/
SOURCE_DIR=src/
BUILD_DIR=build/
BIN_DIR=bin/

DRIVER_INCLUDE=-I$(DRIVER_DIR)
SOURCE_INCLUDE=-I$(SOURCE_DIR)

#SRC=hello.cpp goodbye.cpp outputter.cpp
#OBJ=hello.o goodbye.o outputter.o
#DVR=main.cpp
#DVR_OBJ=main.o
#OUT=main.out
SRC=$(wildcard $(SOURCE_DIR)*.cpp)
OBJ=$(patsubst $(SOURCE_DIR)%.cpp,$(BUILD_DIR)%.o,$(SRC))

DVR=$(wildcard $(DRIVER_DIR)*.cpp)
DVR_OBJ=$(patsubst $(DRIVER_DIR)%.cpp,$(BUILD_DIR)%.o,$(DVR))

OUT=$(patsubst $(DRIVER_DIR)%.cpp,$(BIN_DIR)%.out,$(DVR))

CC=g++
#CXXFLAGS+= -MMD -include $(OBJ:.o=.d)

LD=g++

all: $(OUT)

$(BUILD_DIR)%.o: $(SOURCE_DIR)%.cpp
	mkdir -p build/
	$(CC) $(CXXFLAGS) -c $< -o $@ 

$(BUILD_DIR)%.o: $(DRIVER_DIR)%.cpp	
	mkdir -p build/
	$(CC) $(CXXFLAGS) -I$(SOURCE_DIR) -c $< -o $@

$(OUT): $(OBJ) $(DVR_OBJ)
	mkdir -p bin/
	$(LD) $^ -o $@

# Specify targets without explicit outputs as phony
.PHONY: clean check-build-dir

clean:
	rm -rf *.o *.out build/ bin/

