main.o: main.c
	gcc -c main.c
test1.o: test1.c
	gcc -c test1.c
test2.o: test2.c
	gcc -c test2.c
StartWork: main.o test1.o test2.o
	gcc -o StartWork main.o test1.o test2.o
	rm -rf *.o
all:StartWork			
