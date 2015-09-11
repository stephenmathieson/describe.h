
CC ?= gcc
CFLAGS = -std=c99 -Wall -Wextra -Ideps
DEPS := $(wildcard deps/*/*.c)
OBJS := $(DEPS:.c=.o)

default: example
	./$<

example: example.o $(OBJS)

clean:
	rm -rf $(OBJS) example.o example

.PHONY: default clean
