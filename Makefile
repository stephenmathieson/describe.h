
example: example.c
	$(CC) -std=c99 $^ -o $@
	./example

.PHONY: example
