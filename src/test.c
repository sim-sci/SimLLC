#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substr(char *str_og, char *substr, int idx, int len);

int main() {
    //char hex[] = "01001010";                          // here is the hex string
    //int num = (int)strtol(hex, NULL, 2);       // number base 16
    //printf("%B\n", num);                       // print it as a char
    //printf("%d\n", num);                        // print it as decimal
    //printf("%X\n", num);                        // print it back as hex
    //printf("Last 6 characters: %s\n", hex[strlen(hex) - 1]);
    
    return 0;
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
    int = 0;
    while ((i < len) && (str_og[idx + i] != '\0')){
        substr[i] = str_og[idx + i];
        i++;
    }

    // Add null character to string
    substr[len] = '\0';
}
