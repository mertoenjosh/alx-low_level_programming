CC=gcc
CFLAGS=-I. -Wall -Werror -Wextra -pedantic -std=gnu89
DEPS = main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: 0-isupper.o 1-memcpy.o 2-strncpy.o 3-strspn.o 6-abs.o 0-memset.o 1-strncat.o 3-islower.o 4-isalpha.o 9-strcpy.o  _putchar.o 0-strcat.o 2-strchr.o 3-puts.o 4-strpbrk.o _atoi.o 1-isdigit.o 2-strlen.o 3-strcmp.o 5-strstr.o

clean:
	rm -f *.o
