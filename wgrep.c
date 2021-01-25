#include <stdio.h>
#include <string.h>

int main(int argc,char *argv[]) {


    FILE *fp = fopen(argv[2], "r");

    if (fp == NULL) {
        perror("Unable to open file!");
        return (0);
    }

    char linesoftext[200];

    while (fgets(linesoftext, sizeof(linesoftext), fp) != NULL) {
        if (strstr(linesoftext, argv[1])) {
            fputs(linesoftext, stdout);
        }
    }

    fclose(fp);
    return 0;
}