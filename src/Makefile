CC=gcc
CFLAGS=-Wall -std=c99

all: simllc ## Compile Everything

help: ## Help
	@sed -ne '/@sed/!s/## //p' $(MAKEFILE_LIST)	

simllc: main.c parse.o ## Compile main program
	@echo "Compiling... main.c"
	$(CC) $(CFLAGS) -o $@ $^

parse.o: parse.c parse.h ## Parsing File
	@echo "Compiling parse.c and parse.h"
	$(CC) $(CFLAGS) -c $^

clean: ## Clean
	@echo "Cleaning..."
	rm *.o *.h.gch *simllc
