all: go

circle.o: cpp/circle.cpp oop.h
	g++ -c cpp/circle.cpp -o circle.o
shape.o: cpp/shape.cpp oop.h
	g++ -c cpp/shape.cpp -o shape.o

shape2d.o: cpp/shape2d.cpp oop.h
	g++ -c cpp/shape2d.cpp -o shape2d.o

square.o: cpp/square.cpp oop.h
	g++ -c cpp/square.cpp -o square.o

triangle.o: cpp/triangle.cpp oop.h
	g++ -c cpp/triangle.cpp -o triangle.o

main.o: main.cpp oop.h
	g++ -c main.cpp -o main.o

go: circle.o shape.o shape2d.o square.o triangle.o main.o
	g++ circle.o shape.o shape2d.o square.o triangle.o main.o -o go

clean:
	rm -v *.o go
