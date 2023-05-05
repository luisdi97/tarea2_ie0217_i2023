TARGET = test.exe
SOURCES = algoritmosSort.cpp
CC = g++

ifeq ($(OS),Windows_NT)
	RM = del
else
	RM = rm
endif

.PHONY: clean

all: $(SOURCES)
	$(CC) $(SOURCES) -o $(TARGET)
	./$(TARGET)

clean:
	$(RM) $(TARGET)
