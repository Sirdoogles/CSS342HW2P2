
# print out each command being executed 
all: test.x

classA.o: classA.cpp
	g++ -Wall -c classA.cpp -o test.o

classB.o: classB.cpp
	g++ -Wall -c classB.cpp -o test.o

test.o: test.cpp
	g++ -Wall -c test.cpp -o test.o

test.x: test.o classA.o classB.o 
	g++ test.o classA.o classB.o -o test.x

clean:
	rm -rf *o all