/*
 * sim-sci (Simulation Scientists)
 *
 * Team: Jinghan Zhang
 *       Ramez Abdo
 *       Nisanath Kangwanchaivanich
 *       Ibrahim Binmahfood
 *
 * main.c: Main file
 *
 */       

#include "parse.h"
#include <unistd.h>

int main(int argc, char **argv){ 
    // Flags and opt var
    int s_flag = 0;
    int v_flag = 0;
    int f_flag = 0;
    int opt;

    // Check for -v and -f arguments given from Command Line
    while ((opt = getopt(argc, argv, "svf:")) != -1){
        // Check which argument/no argument given from opt var
        switch (opt) {
            // Silent running Mode
            case 's':
                s_flag = 1;
                break;
            // Verbose output
            case 'v':
                v_flag = 1;
                break;
            // Open the trace file
            case 'f':
                f_flag = 1; 
                break; 
            case '?':
            // If nothing given then show usage
            default:
                fprintf(stdout, "Usage: %s [-v] [-s] [-f filename]\n", argv[0]);
                fprintf(stdout, "\t-s\tRuns in Silent Running Mode but default is Normal Running Mode\n");
                fprintf(stdout, "\t-f\tSpecify tracefile filename\n");
                fprintf(stdout, "\t-v\tVerbose Output\n");
                fprintf(stdout, "Note:\n  -s and -v options are only available with -f option\n");

                exit(EXIT_FAILURE);
                break;
        } 
    }

    // Check if option index is greater than argc
    if (optind > argc){
        fprintf(stderr, "Error: Arguements specified unknown\n");
        exit(EXIT_FAILURE);
    }

    // Debug
    // printf("v_flag=%d , optind=%d , argc=%d\n", v_flag, optind, argc);

    // Apply Flags
    if (f_flag){
        if (s_flag) printf("Running in Silent Mode\n");
        else  printf("Running in Normal Mode\n");

        if (v_flag) printf("Verbose Output ON\n"); 
        parse_file(optarg);

        exit(EXIT_SUCCESS);
    } 

    exit(EXIT_FAILURE);
}
