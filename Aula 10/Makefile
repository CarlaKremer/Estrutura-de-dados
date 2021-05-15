all: build run clean

build: pilha.c
	@gcc pilha.c -Wall -o pilha.exe
	@chcp 65001

run:
	@.\pilha.exe

clean:
	@rm pilha.exe