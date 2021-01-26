#include <stdio.h>
#include <stdlib.h>



int main(int argone, char *argtwo[]) {
    FILE *file;
    char string;
    char *filename;


    if (argone < 2) {
        printf("bad file");
        return (0);
    }

    else {

        for (int x = 1; x < argone; x++) {

            filename = argtwo[x];
            file = fopen(filename, "r");

            if (file) {

                while ((string = fgetc(file)) != EOF) {
                    printf("%c", string);
                }

            }
        }
        return (0);
    }

}