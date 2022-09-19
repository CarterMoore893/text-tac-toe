# TTC Makefile
CC = g++
CFLAGS = -g -Wall
TARGET = ./bin/ttc.out

all: ./src/*.cpp
	$(CC) $(CFLAGS) ./src/*.cpp -o $(TARGET)

clean:
	$(RM) $(TARGET)
