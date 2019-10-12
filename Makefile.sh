
# print out each command being executed 
all: test.x

test.x: base.o classA.o classB.o test.o 
	g++ base.o classA.o classB.o test.o -o test.x

test.o: test.cpp
	g++ -Wall -c test.cpp -o test.o

base.o: base.cpp
	g++ -Wall -c base.cpp -o test.o 

classA.o: classA.cpp
	g++ -Wall -c classA.cpp -o test.o

classB.o: classB.cpp
	g++ -Wall -c classB.cpp -o test.o

clean:
	rm -rf *o all