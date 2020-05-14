a.out : base.o main.o extras.o
	gcc -o a.out base.o main.o extras.o
base.o : base.c
	gcc -c -o base.o base.c
main.o : main.c
	gcc -c -o main.o main.c
extra.o : extras.c
	gcc -c -o extras.o extras.c

