CC = gcc
CFLAGS = `pkg-config --cflags gtk4`
LDFLAGS = `pkg-config --libs gtk4`
SRC = src/main.c
TARGET = app

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC) $(LDFLAGS)

clean:
	rm -f $(TARGET)
