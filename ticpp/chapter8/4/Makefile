all:
	g++ -I. -c test1.cpp -o test1.o
	g++ -I. -c test2.cpp -o test2.o
	g++ -I. -o cppmain main.cpp test1.o test2.o
clean:
	rm -f test1.o
	rm -f test2.o
	rm -f cppmain
