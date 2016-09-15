CC=g++
CFLAGS=-std=c++11
SRC=src/*.cpp
TARGET=out
TRASH=${TARGET}

all: 
	${CC} ${CFLAGS} ${SRC} -o ${TARGET}
clean:
	rm ${TRASH}