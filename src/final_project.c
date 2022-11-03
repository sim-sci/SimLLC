/*
 * Read file and parse out hex adress values.
 */


#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>


int main ()
{
    FILE *fp;
    char type;
    uint64_t address;
        
    fp = fopen("random.txt", "r");
    if(!fp){
        printf("Given file is not found\n");
    }
    for(int i = 0; i<5; ++i){
        fscanf(fp, " %c %" SCNx64, &type, &address);
        printf("%c %" PRIx64 " \n", type, address);
    }
    fclose(fp);
    return 0;
}
