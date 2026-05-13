all: go

circle.o: classes/circle/circle.cpp classes/circle/circle.hpp
	g++ -c classes/circle/circle.cpp -o circle.o

shape.o: classes/shape/shape.cpp classes/shape/shape.hpp
	g++ -c classes/shape/shape.cpp -o shape.o

square.o: classes/square/square.cpp classes/square/square.hpp
	g++ -c classes/square/square.cpp -o square.o

triangle.o: classes/triangle/triangle.cpp classes/triangle/triangle.hpp
	g++ -c classes/triangle/triangle.cpp -o triangle.o

sort.o: functions/sort.cpp functions/functions.hpp
	g++ -c functions/sort.cpp -o sort.o

print.o: functions/print.cpp functions/functions.hpp
	g++ -c functions/print.cpp -o print.o

random.o: functions/randomShapes.cpp functions/functions.hpp
	g++ -c functions/randomShapes.cpp -o random.o 

delete.o: functions/delete.cpp functions/functions.hpp
	g++ -c functions/delete.cpp -o delete.o

main.o: main.cpp oop.hpp
	g++ -c main.cpp -o main.o

go: circle.o sort.o random.o delete.o print.o shape.o square.o triangle.o main.o
	g++ circle.o sort.o random.o delete.o print.o shape.o square.o triangle.o main.o -o go

clean:
	rm -v *.o go