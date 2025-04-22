CC = g++
CFLAGS = -g -Wall -Wextra
TARGET = sort_program

all: $(TARGET)

$(TARGET): main.o insert_sort.o count_sort.o bubble_sort.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o insert_sort.o count_sort.o bubble_sort.o

main.o: main.cpp insert_sort.h count_sort.h bubble_sort.h
	$(CC) $(CFLAGS) -c main.cpp

insert_sort.o: insert_sort.cpp insert_sort.h
	$(CC) $(CFLAGS) -c insert_sort.cpp

count_sort.o: count_sort.cpp count_sort.h
	$(CC) $(CFLAGS) -c count_sort.cpp

bubble_sort.o: bubble_sort.cpp bubble_sort.h
	$(CC) $(CFLAGS) -c bubble_sort.cpp

clean:
	$(RM) $(TARGET) *.o *~ data.txt
