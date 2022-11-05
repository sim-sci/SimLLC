# SimLLC
## Folder Structure
    ├── src                     # Source Code Directory
    |    ├── Makefile           # A build system for SimLLC
    |    ├── main.c             # The main file where everything is called
    |    ├── parse.h            # The header file for parse.c
    |    ├── parse.c            # The implementation src file for parse.h, where parsing the file given and storing of data
    |    ├── trace_file.txt     # The file containing the n commands and addresses
    ├── LICENSE                 
    └── README.md 
## Compiling and Usage
    $ make all
    $ ./simllc
    Usage: ./simllc [-D] [-s] [-f filename]
	          -D	Runs in DEBUG Mode
	          -s	Runs in Silent Running Mode but default is Normal Running Mode
	          -f	Specify tracefile filename
    Note:
      -D and -s options are only available with -f option
## Team
  * Nisanath           - Nisanath Kangwanchaivanich
  * ramezabdo          - Ramez Abdo
  * JinghanZhang-Alisa - Jinghan Zhang
  * CompileMyLife      - Ibrahim Binmahfood
