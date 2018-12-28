#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buff[128];

    if (argc != 2)
        return 1;

    strcpy(buff, argv[1]);

    printf("Your name is %s\n", buff);

    return 0;
    
}