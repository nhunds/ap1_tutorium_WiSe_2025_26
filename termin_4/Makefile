run: a.out
	a.out
a.out: main.o lib.o
	cc main.o lib.o
main.o: main.c lib.h
	cc -c main.c
lib.o:	lib.c lib.h
	cc -c lib.c
rm:
	rm *.o a.out
