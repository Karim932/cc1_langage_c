
# Nom de l'exe 
TARGET = data_exe

# Compilateur et options 
# Au début j'ai choisi gcc mais j'avais bcp d'erreur de librairie donc j'ai changé 
CC = clang
# gestion des erreurs / suppl / version langage / débogage GDB / getline
CFLAGS = -Wall -Wextra -std=c11 -g -D_POSIX_C_SOURCE=200809L


# fichier src
SRC = src/main.c

# Règle principale
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

# CLEAN 
.PHONY: clean
clean: 
	rm -f $(TARGET) 

