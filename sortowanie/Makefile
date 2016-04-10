#
#  To sa opcje dla kompilacji
#
CXXFLAGS=-g -Iinc -Wall -pedantic -std=c++11

__start__: start
	./start

start: obj obj/main.o obj/Stopwatch.o obj/Stos.o obj/Kolejka.o obj/Lista.o  obj/IList.o obj/IQueue.o obj/IStack.o obj/Dictionary.o obj/sort.o obj/stoper.o obj/sortTest.o obj/IRunnable.o
	g++ -Wall -pedantic -std=c++11 -o start obj/main.o \
	 obj/Stopwatch.o obj/Stos.o obj/Kolejka.o obj/Lista.o obj/IList.o \
	obj/IQueue.o obj/IStack.o obj/Dictionary.o obj/sort.o obj/sortTest.o \
	obj/stoper.o obj/IRunnable.o

obj:
	mkdir obj


obj/main.o: src/main.cpp  inc/Stopwatch.h inc/Stos.h inc/Kolejka.h
	g++ -c ${CXXFLAGS} -o obj/main.o src/main.cpp

obj/sortTest.o: src/sortTest.cpp  inc/sortTest.hh src/sort.cpp  inc/sort.hh
	g++ -c ${CXXFLAGS} -o obj/sortTest.o src/sortTest.cpp

obj/sort.o: src/sort.cpp  inc/sort.hh
	g++ -c ${CXXFLAGS} -o obj/sort.o src/sort.cpp

obj/stoper.o: src/stoper.cpp  inc/stoper.hh
	g++ -c ${CXXFLAGS} -o obj/stoper.o src/stoper.cpp

obj/Lista.o: src/Lista.cpp  inc/Lista.h
	g++ -c ${CXXFLAGS} -o obj/Lista.o src/Lista.cpp

obj/Kolejka.o: src/Kolejka.cpp  inc/Kolejka.h 
	g++ -c ${CXXFLAGS} -o obj/Kolejka.o src/Kolejka.cpp

obj/Stos.o: src/Stos.cpp  inc/Stos.h
	g++ -c ${CXXFLAGS} -o obj/Stos.o src/Stos.cpp

obj/Stopwatch.o: src/Stopwatch.cpp inc/Stopwatch.h
	g++ -c ${CXXFLAGS} -o obj/Stopwatch.o src/Stopwatch.cpp

obj/Dictionary.o: src/Dictionary.cpp inc/Dictionary.h
	g++ -c ${CXXFLAGS} -o obj/Dictionary.o src/Dictionary.cpp

obj/IList.o: src/IList.cpp inc/IList.h
	g++ -c ${CXXFLAGS} -o obj/IList.o src/IList.cpp

obj/IStack.o: src/IStack.cpp inc/IStack.h
	g++ -c ${CXXFLAGS} -o obj/IStack.o src/IStack.cpp

obj/IQueue.o: src/IQueue.cpp inc/IQueue.h
	g++ -c ${CXXFLAGS} -o obj/IQueue.o src/IQueue.cpp

obj/IRunnable.o: src/IRunnable.cpp inc/IRunnable.h
	g++ -c ${CXXFLAGS} -o obj/IRunnable.o src/IRunnable.cpp

clean:
	rm -f obj/*.o start
