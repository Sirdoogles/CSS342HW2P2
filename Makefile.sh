
# print out each command being executed 
all: test.x

test.x: classA.o classB.o test.o 
	g++ classA.o classB.o test.o -o test.x

test.o: test.cpp
	g++ -Wall -c test.cpp -o test.o

classA.o: classA.cpp classA.h base.h
	g++ -Wall -c classA.cpp -o test.o

classB.o: classB.cpp classB.h base.h
	g++ -Wall -c classB.cpp -o test.o

clean:
	rm -rf *o all