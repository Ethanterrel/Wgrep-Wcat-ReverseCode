#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define length 1000

int main(int argone,char *argtwo[]) {
    FILE *file;
    char linesoftext[length];
    char *filename;
    char chary [length];

    if (argone < 2) {
        printf("Wgrep: Searchterm [file...]");
        return 0;
    }  else if(argone == 2) {
        fgets(chary, length, stdin);
        fputc(linesoftext, stdout);

        if (strstr(chary, argtwo[1]) != NULL)
        {
            printf( chary, stdout);
            printf("Word is found");
            exit(0);
        }

    }


    for (int x = 2; x < argone; x++) {


        filename = argtwo[x];
        file = fopen(filename, "r");

        while (fgets(linesoftext, sizeof(linesoftext), file) != NULL) {
            if (strstr(linesoftext, argtwo[1])) {
                fputs(linesoftext, stdout);


            }
        }
    }
    fclose(file);
    return 0;


}
