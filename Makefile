# Variáveis de configuração
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/unidade-de-massa.c scr/unidade-de-velocidade.c
OBJ = $(SRC:src/%.c=build/%.o)
OUTPUT_DIR = output
TARGET = $(OUTPUT_DIR)/main

# Detectar sistema operacional
OS := $(shell uname -s)

# Comandos compatíveis para criação e remoção de diretórios
ifeq ($(OS), Windows_NT)
    MKDIR = if not exist $(subst /,\\,$(1)) mkdir $(subst /,\\,$(1))
    RM = rmdir /s /q $(subst /,\\,$(1))
    RM_FILE = del /q $(subst /,\\,$(1))
else
    MKDIR = mkdir -p $(1)
    RM = rm -rf $(1)
    RM_FILE = rm -f $(1)
endif

# Regra padrão
all: $(TARGET)

# Criação do executável
$(TARGET): $(OBJ)
	$(call MKDIR, $(OUTPUT_DIR))
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

# Regra para criar arquivos objeto
build/%.o: src/%.c
	$(call MKDIR, build)
	$(CC) $(CFLAGS) -c $< -o $@

# Limpeza dos arquivos gerados
clean:
	$(call RM, build)
	$(call RM, $(OUTPUT_DIR))
