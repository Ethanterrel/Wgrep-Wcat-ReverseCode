#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define length 1000

int main(int argc, char *argv[]) {

    FILE *file;
    char *filename;
    char string;




    char linesoftext[length];
    char chary [length];
    int len, i, index, wordStart, wordEnd;
    char reverse [length];


    if(argc  < 2) {
        gets(chary);

        len = strlen(chary);
        index = 0;

        wordStart = len - 1;
        wordEnd = len - 1;

        while (wordStart > 0) {
            if (chary[wordStart] == ' ') {
                i = wordStart + 1;
                while (i <= wordEnd) { // if the word is found
                    reverse[index] = chary[i];


                    i++;
                    index++;
                }
                reverse[index++] = ' ';


                wordEnd = wordStart - 1;
            }

            wordStart--;
        }
        for (i = 0; i <= wordEnd; i++) { // add the last word
            reverse[index] = chary[i];
            index++;
        }


        printf("Reversed \n%s", reverse);
        return 0;

    }
    else   {
        for (int x = 1; x < argc; x++) {

            filename=argv[x];
            file = fopen(filename, "r");

            if (file) {
                while ((string = fgetc(file)) != EOF) {



                    printf("%c", string);
                }

            }
        }
        return (0);

    }