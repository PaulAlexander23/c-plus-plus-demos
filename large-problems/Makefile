build-clangpp:
	clang++ -Ofast -Wall -Werror main.cpp -L/opt/AMD/aocl/aocl-linux-aocc-4.0/lib_LP64/ -lamdlibm -fsclrlib=AMDLIBM -lamdlibmfast -lm -o main.out

build-clang:
	clang -lstdc++ main.cpp -o main.out

build-gpp:
	g++ main.cpp -o main.out
