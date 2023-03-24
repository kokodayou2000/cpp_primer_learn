CC = g++
CFLAGS = -g -Wall

introduction: deng.o friend.o
	$(CC) $(CFLAGS) -o introduction introduction.cpp deng.o friend.o

deng.o: deng.h
	$(CC) $(CFLAGS) -c deng.cpp

friend.o: friend.h
	$(CC) $(CFLAGS) -c friend.cpp 



clean:
	rm -f introduction
	rm -f *.o

