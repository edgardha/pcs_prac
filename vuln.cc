#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int copyAndPrint(char *name){
    char buff[128];

    strcpy(buff, name);
    printf("Your name is %s\n", buff);

    return 0;
}

int main(int argc, char *argv[]) {
    char buff[128];

    if (argc != 2) {
        printf("Enter your name as argument. Ex: ./<prog_name> pepe\n");
        return 1;
    }

    copyAndPrint(argv[1]);

    return 0;
    
}