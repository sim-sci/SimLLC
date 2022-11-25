#include <stdio.h>
#include <string.h>

void substr(char *str_og, char *substr, int idx, int len);

char *hexconversion(char* hex){
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

int main(){

    char byte_sel[7];

	substr(hexconversion("0F3D0EE2"), byte_sel, strlen(hexconversion("0F3D0EE2")) - 6, 6);

    printf("%s\n", hexconversion("0F3D0EE2"));
    printf("%s\n", byte_sel);

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
    int i = 0;
    while ((i < len) && (str_og[idx + i] != '\0')){
        substr[i] = str_og[idx + i];
        i++;
    }

    // Add null character to string
    substr[len] = '\0';
}
