#Makefile
all: add-nbo


add-nbo: nbo.o main.o
	g++ -o add-nbo nbo.o main.o

main.o: nbo.h main.cpp

nbo.o: nbo.h nbo.cpp

clean:
	rm -f add-nbo
	rm -f *.o
