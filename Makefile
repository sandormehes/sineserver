OBJS = sineserver.o
SOURCE = sineserver.c
HEADER = sineserver.h
OUT = server
CC = gcc
FLAGS = -g -c -Wall
LFLAGS = -lasound -lm

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

sineserver.o: sineserver.c
	$(CC) $(FLAGS) sineserver.c -std=gnu99

clean:
	rm -f $(OBJS) $(OUT)
