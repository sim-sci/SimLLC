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
    FILE *fp = NULL;

    // Read in filename given
    fp = fopen(filename, "r");

    // If it doesn't exist than report to stderr
    if(fp == NULL){
        fprintf(stderr,"Error: %s doesn't exist\n", filename);
        exit(EXIT_FAILURE);
    }

    // Read in the 5 lines present in file (May need to change to be more
    // generic to support the length of file)
    //for (int i = 0; i < 5; ++i){
    //    fscanf(fp, " %c %" SCNx64, &type, &address);
    //    printf("%c %" PRIx64 " \n", type, address);
    //}

    ln = 0;
    // WHILE the file is not EOF and no file error
    while (!feof(fp) && !ferror(fp)){
        // Read next line of file and store into data array. Store only MAX_LEN
        // per line. IF there is more lines to read than increment ln
        if (fgets(data[ln], MAX_LEN, fp) != NULL){ 
            ln++;
        }
    }

    fclose(fp);
    return 0;
}
