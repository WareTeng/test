main: main.o employee.o person.o
	g++ main.o employee.o person.o -o main

main.o: main.cpp employee.h person.h
	g++ -c main.cpp

employee.o: employee.cpp employee.h
	g++ -c employee.cpp

person.o: person.cpp person.h
	g++ -c person.cpp

.PHONY : clean
clean:
	cat main.cpp
	rm -f *.o
