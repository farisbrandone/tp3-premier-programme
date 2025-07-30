# Define compiler
CC = gcc

# Compilation options
CFLAGS = -Wall -Wextra -g

# Final executable name
TARGET = tp3_programme

# Sources files (.c)
SRCS = main.c

# Generated object (.o) files
OBJS = $(SRCS:.c=.o)

# Main rule
all: $(TARGET)

# Generation of the executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation of objects files
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# cleaning
clean:
	rm -f $(OBJS) $(TARGET)

# Reinstall
re: clean all
