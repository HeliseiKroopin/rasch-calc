CC = gcc
FILE = include/main.c
FLAGS = -o
TARGET = result

all: $(TARGET)


$(TARGET) : $(FILE)
	$(CC) $(FILE) $(FLAGS) $(TARGET)

