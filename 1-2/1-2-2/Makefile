aprint: main.o print.o
	g++ -o aprint main.o print.o
main.o: main.cc
	g++ -c main.cc
print.o: print.cc
	g++ -c print.cc
clean:
	rm aprint main.o print.o
