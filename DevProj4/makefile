CC=gcc
CFLAGS=-I.
DEPS = externs.h
OBJ = protoype.o archiver.o  unarchiver.o archiveCheck.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

HW3: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)



