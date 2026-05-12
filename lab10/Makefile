all: go

circle.o: classes/circle.cpp oop.h
	g++ -c classes/circle.cpp -o circle.o

shape.o: classes/shape.cpp oop.h
	g++ -c classes/shape.cpp -o shape.o

shape2d.o: classes/shape2d.cpp oop.h
	g++ -c classes/shape2d.cpp -o shape2d.o

square.o: classes/square.cpp oop.h
	g++ -c classes/square.cpp -o square.o

triangle.o: classes/triangle.cpp oop.h
	g++ -c classes/triangle.cpp -o triangle.o

sort.o: functions/sort.cpp oop.h
	g++ -c functions/sort.cpp -o sort.o

print.o: functions/print.cpp oop.h
	g++ -c functions/print.cpp -o print.o

obj_count.o: functions/count.cpp oop.h
	g++ -c functions/count.cpp -o obj_count.o

main.o: main.cpp oop.h
	g++ -c main.cpp -o main.o

go: circle.o sort.o obj_count.o print.o shape.o shape2d.o square.o triangle.o main.o
	g++ circle.o sort.o obj_count.o print.o shape.o shape2d.o square.o triangle.o main.o -o go

clean:
	rm -v *.o go
