#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/Stopwatch.o obj/Stos.o obj/Kolejka.o obj/Lista.o
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/Stopwatch.o obj/Stos.o obj/Kolejka.o obj/Lista.o

obj:
	mkdir obj


obj/main.o: src/main.cpp  inc/Stopwatch.h inc/Stos.h inc/Kolejka.h
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/Lista.o: src/Lista.cpp  inc/Lista.h
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Kolejka.o: src/Kolejka.cpp  inc/Kolejka.h 
	g++ -c ${CXXFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/Stos.o: src/Stos.cpp  inc/Stos.h
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/Stopwatch.h
	g++ -c ${CXXFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

clean:
	rm -f obj/*.o start
