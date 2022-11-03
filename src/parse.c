/*
 * sim-sci (Simulation Scientists)
 *
 * Team: Jinghan Zhang
 *       Ramez Abdo
 *       Nisanath Kangwanchaivanich
 *       Ibrahim Binmahfood
 *
 * parse.c: Implementation to read a trace file and parse out hex address 
 * values to stdout.
 *
 */

#include "parse.h"

int parse_file(char *filename){
    FILE *fp;
    char type;
    uint64_t address;

    // Read in filename given
    fp = fopen(filename, "r");
    if(fp == NULL){
        perror("Given file is not found\n");
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 5; ++i){
        fscanf(fp, " %c %" SCNx64, &type, &address);
        printf("%c %" PRIx64 " \n", type, address);
    }

    fclose(fp);

    return 0;
}
