.PHONY = all clean
CC = gcc                        # compiler to use
CFLAGS=-I.
amake: a.c
	${CC} a.c -o a $(CFLAGS)
