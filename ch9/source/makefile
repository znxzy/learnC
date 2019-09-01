TARGET = $1
CFLAGS = -Wall -g

${TARGET} : .c
	gcc $(CFLAGS) $< -o $@


.PHONY: clean
clean:
	-rm -fv *.o
	-rm -fv *.exe
	-rm -fv *.stackdump