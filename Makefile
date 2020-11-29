run.exe: main.c mem1.c
	gcc main.c mem1.c -o run.exe

mem1.o: mem1.c
	gcc mem1.c 