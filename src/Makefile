CC=gcc
CFLAGS=-g -Wall -std=c99

help: ## Help
	@sed -ne '/@sed/!s/## //p' $(MAKEFILE_LIST)	

all: simllc ## Compile Everything

simllc: main.c parse.o ## Compile main program
	@echo "Compiling... main.c"
	$(CC) $(CFLAGS) -o $@ $^

parse.o: parse.c parse.h ## Parsing File
	@echo "Compiling parse.c and parse.h"
	$(CC) $(CFLAGS) -c $^

clean: ## Clean
	@echo "Cleaning..."
	rm *.o *.h.gch *simllc
