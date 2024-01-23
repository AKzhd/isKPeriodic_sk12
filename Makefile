# Это комментарий, который говорит, что переменная CC указывает компилятор, используемый для сборки
CC=g++

all: isKPeriodic
isKPeriodic: main.o ch.o
	$(CC) main.o ch.o -o isKPeriodic

main.o: main.cpp
	$(CC) -c main.cpp

ch.o: ch.cpp
	$(CC) -c ch.cpp

clean:
	rm -rf *.o isKPeriodic
