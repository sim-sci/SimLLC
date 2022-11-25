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

void parse_file(char *filename){
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

    //ln = 0;
    //// WHILE the file is not EOF and no file error
    //while (!feof(fp) && !ferror(fp)){
    //    // Read next line of file and store into data array. Store only MAX_LEN
    //    // per line. IF there is more lines to read than increment ln
    //    if (fgets(data[ln], MAX_LEN, fp) != NULL){ 
    //        ln++;
    //    }
    //}

    ln = 0;
    while ((fscanf(fp, "%d %s", &n[ln], data[ln])) != EOF){
        ln++;
    }
    fclose(fp);

    for (int i = 0; i <= ln; i++){
        printf("%d %s", n[i], data[i]);
    }
    //for (int i = 0; i < sizeof(data)/sizeof(data[0]); i++) {
    //    substr(data[i], n[i], 
    //}
    //
}

char *hex2bin(char *hex) {

    // Maximum buffersize
    static char binary[100];	
	long int count  = 0;
	
	while(hex[count]){
		
	    switch(hex[count]){
            case '0': 
		        //printf("0000");
                strcat(binary, "0000");
		        break;

		    case '1':
		        //printf("0001");
                strcat(binary, "0001");
		        break;

		    case '2':
		        //printf("0010");
                strcat(binary, "0010");
		        break;

		    case '3':
		        //printf("0011");
                strcat(binary, "0011");
		        break;
		    
		    case '4':
		        //printf("0100");
                strcat(binary, "0100");
		        break;
		    
		    case '5':
		        //printf("0101");
                strcat(binary, "0101");
		        break;
		    
		    case '6':
		        //printf("0110");
                strcat(binary, "0110");
		        break;
		    
		    case '7':
		        //printf("0111");
                strcat(binary, "0111");
		        break;

		    case '8':
		        //printf("1000");
                strcat(binary, "1000");
		        break;
		    
		    case '9':
		        //printf("1001");
                strcat(binary, "1001");
		        break;
		    
		    case 'a':
		    case 'A':
		        //printf("1010");
                strcat(binary, "1010");
		        break;
		    
		    case 'b':
		    case 'B':
		        //printf("1011");
                strcat(binary, "1011");
		        break;
		    
		    case 'c':
		    case 'C':
		        //printf("1100");
                strcat(binary, "1100");
		        break;	
	
		    case 'd':
		    case 'D':
		        //printf("1101");
                strcat(binary, "1101");
		        break;

		    case 'e':
		    case 'E':
		        //printf("1110");
                strcat(binary, "1110");
		        break;

		    case 'f':
		    case 'F':
		        //printf("1111");
                strcat(binary, "1111");
		        break;

		    default:
		        printf("invalid input");
		        break;
		}
	 	count++;
	}
	
    return binary;
}

void substr(char *str_og, char *substr, int idx, int len){
    // Check if index is out of range of length of original string
    if (idx >= strlen(str_og)){
        fprintf(stderr, "Error: index argument is out of range of original string\n");
        return;
    }

    // Copy from original string at index to len into substring AND check if
    // the next shifted position of original string to be copied is not the
    // null character
    int i = 0;
    while ((i < len) && (str_og[idx + i] != '\0')){
        substr[i] = str_og[idx + i];
        i++;
    }

    // Add null character to string
    substr[len] = '\0';
}
