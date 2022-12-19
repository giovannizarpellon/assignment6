CC=gcc
CFLAGS=-std=gnu99

all: keywords

keywords: FORCE
	rm -rf *~ keywords
	$(CC) -o keywords keywords.c keywords_main.obj $(CFLAGS)

clean:
	rm -rf *~ keywords

FORCE: