
CC ?= gcc
CFLAGS = -std=c99 -Wall -Wextra -Ideps
DEPS = $(wildcard deps/*/*.c)

example: example.c $(DEPS)
	$(CC) $(CFLAGS) $^ -o $@
	./example

.PHONY: example
