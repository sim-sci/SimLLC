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

void usage(char *str);
void p_data(void);

int main(int argc, char **argv){ 
    // Mode Flags and opt var
    int D_flag = 0;
    int s_flag = 0;
    int f_flag = 0;
    int opt;

    // Check for -v and -f arguments given from Command Line
    while ((opt = getopt(argc, argv, "Dsf:")) != -1){
        // Check which argument/no argument given from opt var
        switch (opt) {
            // DEBUG Mode
            case 'D':
                D_flag = 1;
                break;
            // Silent running Mode
            case 's':
                s_flag = 1;
                break;
            // Open the trace file
            case 'f':
                f_flag = 1; 
                break; 
            // If nothing given then show usage
            default:
                usage(argv[0]);
                break;
        } 
    }

    // Debug
    //printf("f_flag=%d, D_flag=%d, s_flag=%d, optind=%d , argc=%d\n",
    //                            f_flag, D_flag, s_flag, optind, argc);

    // Check if valid options is less than argc
    if (optind < argc){
        fprintf(stderr, "ERROR: Invalid Argument(s)\n");
        usage(argv[0]);
    }

    // IF file flag = 1
    if (f_flag){
        parse_file(optarg);
        // IF DEBUG flag = 1
        if (D_flag && !s_flag) {
            p_data();
        }

        // IF Silent flag = 1 AND NOT DEBUG flag
        if (s_flag && !D_flag) {
            printf("Running in Silent Mode\n");
            exit(EXIT_SUCCESS);
        }

        // IF Silent flag = 1 AND DEBUG flag
        else if (s_flag && D_flag){
            fprintf(stderr, "Choose 1 Mode only: (-D or -s or None)\n");
            usage(argv[0]);
        }

        // ELSE Normal Mode
        else {
            printf("Running in Normal Mode\n");
            exit(EXIT_SUCCESS);
        }
    } 

    // IF file flag = 0, then just show usage and exit
    else {
        usage(argv[0]);
    }

    return 0;
}

// Print out the usage of this program
void usage(char *str){
    fprintf(stdout, "Usage: %s [-D] [-s] [-f filename]\n", str);
    fprintf(stdout, "\t-D\tRuns in DEBUG Mode\n");
    fprintf(stdout, "\t-s\tRuns in Silent Running Mode but default is Normal Running Mode\n");
    fprintf(stdout, "\t-f\tSpecify tracefile filename\n");
    fprintf(stdout, "Note:\n  -D and -s options are only available with -f option\n");

    exit(EXIT_FAILURE);
}

// Print out data from char array
void p_data(void){
    printf("Running in DEBUG Mode\n");
    
    // Display each line
    for (int i = 0; i < ln; i++){
        printf("%s", data[i]); 
    }

    printf("\n");
    exit(EXIT_SUCCESS);
}
