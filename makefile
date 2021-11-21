all:  connections
connections: main.o my_mat.a my_mat.h
	gcc -Wall -g -o connections main.o my_mat.a
my_mat:my_mat.a
my_mat.a: my_mat.o 
	ar -rcs my_mat.a my_mat.o
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c 
main.o: main.c my_mat.h
	gcc -Wall -g -c main.c 

.PHONY: clean#.PHONY means that clean is not a file.
clean:
	rm -f *.o *.a  connections 