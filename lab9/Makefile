all: go

child.o: classes/child/child.cpp classes/child/child.h 
	g++ -c classes/child/child.cpp -o child.o

division.o: classes/division/division.cpp classes/division/division.h 
	g++ -c classes/division/division.cpp -o division.o

employee.o: classes/employee/employee.cpp classes/employee/employee.h classes/person/person.h classes/jobDescription/jobDescription.h classes/division/division.h
	g++ -c classes/employee/employee.cpp -o employee.o

jobDescription.o: classes/jobDescription/jobDescription.cpp classes/jobDescription/jobDescription.h 
	g++ -c classes/jobDescription/jobDescription.cpp -o jobDescription.o

person.o: classes/person/person.cpp classes/person/person.h 
	g++ -c classes/person/person.cpp -o person.o

spouse.o: classes/spouse/spouse.cpp classes/spouse/spouse.h 
	g++ -c classes/spouse/spouse.cpp -o spouse.o

printObj.o: functions/printObj/printObj.cpp functions/printObj/printObj.h
	g++ -c functions/printObj/printObj.cpp -o printObj.o

setObj.o: functions/setObj/setObj.cpp functions/setObj/setObj.h
	g++ -c functions/setObj/setObj.cpp -o setObj.o

main.o: main.cpp oop.h
	g++ -c main.cpp -o main.o

go: child.o division.o employee.o jobDescription.o person.o spouse.o printObj.o setObj.o main.o
	g++ child.o division.o employee.o jobDescription.o person.o spouse.o main.o printObj.o setObj.o -o go

clean:
	rm -v *.o go
