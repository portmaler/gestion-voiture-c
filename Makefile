CC = gcc
CFLAGS = `pkg-config --cflags gtk+-3.0`
LDFLAGS = `pkg-config --libs gtk+-3.0`

SRC = src/main.c src/car.c src/client.c src/contract.c src/callbacks.c
OBJ = $(SRC:src/%.c=obj/%.o)
OUT = bin/car_management_app

# Default target
all: $(OUT)

# Linking the object files into the final binary
$(OUT): $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

# Rule for compiling .c files into .o files
obj/%.o: src/%.c
	$(CC) -c $< -o $@ $(CFLAGS)

# Clean up object files and final binary
clean:
	rm -f obj/*.o $(OUT)

# Create necessary directories for object files and binary
$(shell mkdir -p obj bin)
