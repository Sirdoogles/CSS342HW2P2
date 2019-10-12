
# print out each command being executed 
all: test.x

classA.o: classA.cpp
	g++ -Wall -c classA.cpp -o classA.o

classB.o: classB.cpp
	g++ -Wall -c classB.cpp -o classB.o

base.o: base.cpp
	g++ -Wall -c base.cpp -o base.o

test.o: test.cpp
	g++ -Wall -c test.cpp -o test.o

test.x: test.o classA.o classB.o base.o
	g++ test.o classA.o classB.o base.o -o test.x

clean:
	rm -rf *o all
