hello_world: main.o print.o
	g++ -o hello_world main.o print.o
main.o: main.cc
	g++ -c main.cc
print.o: print.cc
	g++ -c print.cc
clean:
	rm hello_world main.o print.o
