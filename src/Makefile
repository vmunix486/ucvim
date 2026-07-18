CC = cc
CFLAGS =-ansi -pedantic -Ofast -flto

all:
	$(CC) ucvim.c $(CFLAGS) -o ucvim

wchar:
	$(CC) ucvim.c $(CFLAGS) -D_WCHAR -o ucvim

clean:
	rm -f ucvim
