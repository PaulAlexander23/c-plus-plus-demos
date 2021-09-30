
DRIVERS_DIR=drivers/
SOURCES_DIR=src/
BUILD_DIR=build/

DRIVERS=main.cpp
SOURCES=hello.cpp goodbye.cpp outputter.cpp

DRIVERS_INCLUDE=-I./drivers/
SOURCES_INCLUDE=-I./src/

SRC=$(wildcard $(SOURCES_DIR)*.cpp)
OBJ=$(patsubst $(SOURCES_DIR)%.cpp,$(BUILD_DIR)%.o,$(SRC))
DVR=$(wildcard $(DRIVERS_DIR)*.cpp)
DVR_OBJ=$(patsubst $(DRIVERS_DIR)%.cpp,%.o,$(DVR))
OUT=$(patsubst $(DRIVERS_DIR)%.cpp,%.out,$(DVR))

all: $(OBJ) $(DVR_OBJ) $(OUT)
	echo $(SRC)
	echo $(OBJ)
	echo $(DVR)
	echo $(DVR_OBJ)
	echo $(OUT)

$(OBJ): $(SRC)
	g++ -c $< -o $@

$(DVR_OBJ): $(DVR)
	g++ $(SOURCES_INCLUDE) -c $< -o $@

$(OUT): $(DVR_OBJ)
	g++ $(OBJ) $< -o $@

clean:
	rm -rf build/* main.o main.out
