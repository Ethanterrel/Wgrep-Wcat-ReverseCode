

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 100
ssize_t getline(char **lineptr, size_t *n, FILE *stream);
#define length 5000


typedef struct node {
    long pos;
    struct node *next;
} Node;

Node *add(Node *list, long pos);



int main(int argc, char *argv[]) {



    int i = 0;
    FILE *file2;
    FILE *fileopen;

    FILE *p;
    char content[1000][1000];
    int contentLines = 0;

    int lengthofstringtxt;
    int x;
    int index;
    int wordStart;
    int wordEnd;
    int countinglines = 0;

    char chary[length];
    char reverse[length];
    char wordsintext[length];
    char string;

    char buff[1024];
    Node *list = NULL;
    long pos;
    file2= fopen("greppy.txt", "r");
    fileopen = fopen("First.txt", "w");

// 0 Arguments
    if (argc < 2) {
        gets(chary);

        lengthofstringtxt = strlen(chary);
        index = 0;
        wordStart = lengthofstringtxt - 1;
        wordEnd = lengthofstringtxt - 1;

        while (wordStart > 0) {
            if (chary[wordStart] == ' ') { //check string
                x = wordStart + 1;
                while (x <= wordEnd) { // if the word is found
                    reverse[index] = chary[x]; //reverse index based on current string
                    x++;
                    index++;
                }
                reverse[index++] = ' '; // check string
                wordEnd = wordStart - 1;
            }
            wordStart--;
        }
        for (x = 0; x <= wordEnd; x++) { // add the last word
            reverse[index] = chary[x];
            index++;
        }


        printf("Reversed text is now: \n%s", reverse);
        return 0;
    }

// one Argument

    FILE *file;
    char strings;
    char *filename;


    for (int x = 1; x < argc; x++) {

        filename = argv[x];
        file = fopen(filename, "r");

        if (file) {

            while ((string = fgetc(file)) != EOF) {

                printf("%c", string);
            }

        }

    }

    if ((p = fopen(argv[1], "r")) == NULL) {
        printf("Error opening");
    }  else {
        while (fgets(content[contentLines], 1000, p) != NULL) {
            contentLines++;
        }
    }
    for (i = contentLines - 1; i >= 0; i--) {
        if (i == contentLines - 1) {
            printf("%s\n", content[i]);
        } else {
            printf("%s", content[i]);

        }
    }
// 2 arguments
    while (1) {
        long pos = ftell(file2);
        if (fgets(buff, sizeof buff, file2) == NULL)
            break;
        list = add(list, pos);
    }


    if(argc==2){
        while (list != NULL) {
            pos = list->pos; //get pointer position
            fseek(file2, pos, SEEK_SET);
            fgets(buff, sizeof buff, file2);
            buff[strcspn(buff, "\n")] = '\0';
            fprintf(fileopen, "%s\n", buff);
            list = list->next; // get next pointer position

        }
        fclose(file2);
        fclose(fileopen);
    }



}

Node *add(Node *list, long pos){
    Node *node = malloc(sizeof(*node));
    node->pos = pos;
    node->next = list;
    return node;
}