
CC ?= gcc
CFLAGS = -std=c99 -Wall -Wextra -Ideps

example: example.c
	$(CC) $(CFLAGS) $^ -o $@
	./example

.PHONY: example
