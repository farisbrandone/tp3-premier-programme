# Définir le compilateur
CC = gcc

# Options de compilation
CFLAGS = -Wall -Wextra -g

# Nom de l'exécutable final
TARGET = tp3_programme

# Fichiers sources (.c)
SRCS = main.c

# Fichiers objets (.o) générés
OBJS = $(SRCS:.c=.o)

# Règle principale
all: $(TARGET)

# Génération de l'exécutable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation des fichiers objets
%.o: %.c
	$(CC) $(CFLAGS) -c $<

# Nettoyage
clean:
	rm -f $(OBJS) $(TARGET)

# Réinstaller
re: clean all
