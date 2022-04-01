CC=gcc
CFLAGS=-I. -Wall -Werror -Wextra -pedantic -std=gnu89
DEPS = main.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: 0-isupper.o 1-memcpy.o 2-strncpy.o 3-strspn.o 6-abs.o 0-memset.o 1-strncat.o 3-islower.o 4-isalpha.o 9-strcpy.o  _putchar.o 0-strcat.o 2-strchr.o 3-puts.o 4-strpbrk.o _atoi.o 1-isdigit.o 2-strlen.o 3-strcmp.o 5-strstr.o

clean: 
	rm -f 0-isupper.o
	rm -f 1-memcpy.o
	rm -f 2-strncpy.o
	rm -f 3-strspn.o
	rm -f 6-abs.o
	rm -f 0-memset.o
	rm -f 1-strncat.o
	rm -f 3-islower.o
	rm -f 4-isalpha.o
	rm -f 9-strcpy.o
	rm -f _putchar.o 
	rm -f 0-strcat.o
	rm -f 2-strchr.o
	rm -f 3-puts.o
	rm -f 4-strpbrk.o
	rm -f _atoi.o
	rm -f 1-isdigit.o
	rm -f 2-strlen.o
	rm -f 3-strcmp.o
	rm -f 5-strstr.o

cleanall:
	rm -f *.o
