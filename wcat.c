#include <stdio.h>
#include <stdlib.h>
#define maxchar 1000



int main(int argone, char *argtwo[]) {
    FILE *file;
    char string;
    char *filename;


    if (file == NULL) {
        printf("bad file");
        return (0);
    }
    else
    {
        filename = argtwo[1];
        printf("Filename : %s\n", filename);
    }

    file = fopen(filename, "r");

    if (file) {

        while ((string = fgetc(file)) != EOF) {
            printf("%c", string);
        }


        exit(0);
    }
    return(0);
}