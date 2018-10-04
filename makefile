all: trabalho10

trabalho10: *.o
	gcc trabalho10.o funcs.o -o trabalho10

*.o: trabalho10.c funcs.c
	gcc -c trabalho10.c funcs.c

clean:
	rm *.o trabalho10
