#include <stdio.h>
#include <stdlib.h>

int main(){

char hex[100];
//fgets(hex, 100, stdin); // stdin from keyboard

//read the file
FILE *file = fopen("ECE485hex.txt" , "r");
if(file == NULL){
	printf("File not exist");
	exit(1);
}

while(fgets(hex, 100, file)){
	printf(hex);
}

fclose(file);


return 0;
}
