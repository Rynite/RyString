program_NAME = bin/tests
program_SRC = $(wildcard src/*.c)
program_OBJ = ${program_SRC:.c=.o}
program_INCLUDES = include/ usr/include/

FLAGS = $(foreach dir, $(program_INCLUDES), -I$(dir))

CFLAGS = -g
CC = gcc

.PHONY: all clean

all: $(program_NAME)

$(program_NAME): $(program_OBJ)
	$(CC) $^ -o $@ $(FLAGS) $(CFLAGS)


clean:
	@- rm -rf $(program_NAME) $(program_OBJ)

