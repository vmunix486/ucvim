CC = cc
CFLAGS =-ansi -pedantic -Ofast -flto

all: version.h
	$(CC) ucvim.c $(CFLAGS) -o ucvim

wchar: version.h
	$(CC) ucvim.c $(CFLAGS) -DWCHAR_ENABLED -D_WCHAR -o ucvim

version.h:
	@printf '#define UCVIM_VERSION "%s"\n' "$$(git describe --always --dirty 2>/dev/null || printf dev)" > $@

clean:
	rm -f ucvim version.h
