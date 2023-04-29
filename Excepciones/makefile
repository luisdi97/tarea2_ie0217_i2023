TARGET = test.exe
SOURCES = ./MyException.cpp ./exceptions.cpp
CC = g++

ifeq ($(OS),Windows_NT)
	RM = del
else
	RM = rm
endif

.PHONY: all run clean

all:
	$(CC) $(SOURCES) -o $(TARGET)

run:
	./$(TARGET)

clean:
	$(RM) $(TARGET)
