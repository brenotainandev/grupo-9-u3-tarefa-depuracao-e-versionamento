CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/massa.c
OBJ = main
OUTPUT_DIR = output

all: $(OBJ)

$(OBJ): $(SRC)
	mkdir -p $(OUTPUT_DIR)
	$(CC) $(CFLAGS) $(SRC) -o $(OUTPUT_DIR)/$(OBJ)

clean:
	rm -rf $(OUTPUT_DIR)
