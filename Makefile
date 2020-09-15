CFLAGS = -O -c
CC = cc

all: main

main: main.o libprostokat.a libprostopadloscian.a
	$(CC) -lm -o $@ main.o -L. -lprostokat -lprostopadloscian
main.o: main.c
	$(CC) $(CFLAGS) $^
prostokat.o: prostokat.c prostokat.h
	$(CC) $(CFLAGS) prostokat.c
prostopadloscian.o: prostopadloscian.c prostopadloscian.h
	$(CC) $(CFLAGS) prostopadloscian.c
libprostokat.a: prostokat.o
	$(AR) rcs $@ $^
libprostopadloscian.a: prostopadloscian.o
	$(AR) rcs $@ $^
libs: libprostokat.a libprostopadloscian.a

clean:
	$(RM) -f main *.o *.a *.gch
