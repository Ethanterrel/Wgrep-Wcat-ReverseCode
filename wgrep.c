#include <stdio.h>
#include <string.h>

int main(int argone,char *argtwo[]) {


    FILE *fp = fopen(argtwo[2], "r");

    if (fp == NULL) {
        perror("Wgrep: searchterm");
        perror(argtwo[1]);
        return (0);
    }

    char linesoftext[200];

    while (fgets(linesoftext, sizeof(linesoftext), fp) != NULL) {
        if (strstr(linesoftext, argtwo[1])) {
            fputs(linesoftext, stdout);
        }
    }

    fclose(fp);
    return 0;
}