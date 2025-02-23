
extern-templates: my_class.o my_special_class.o new_class.o extern-templates.cc
	g++ my_class.o my_special_class.o new_class.o extern-templates.cc -o extern-templates.out 

my_class.o: my_class.cc my_class.h
	g++ -c my_class.cc 

my_special_class.o: my_special_class.cc my_class.o my_special_class.h
	g++ my_class.o -c my_special_class.cc 

new_class.o: new_class.cc new_class.h
	g++ -c new_class.cc 
