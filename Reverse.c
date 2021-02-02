#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define length 1000

typedef struct node {
    long pos;
    struct node *next;
} Node;

Node *add(Node *list, long pos);

int main(int argc, char *argv[]) {

    int ft;
    int x=0;
    int j=0;

    FILE *file;
    FILE *fileopen;

    char *filename;
    char string;
    char linesoftext[length];
    char chary[length];
    char reverse[length];


    char buff[1024];
    Node *list = NULL;
    long pos;
    file= fopen("greppy.txt", "r");
    fileopen = fopen("First.txt", "w");

    while (1) {
        long pos = ftell(file);
        if (fgets(buff, sizeof buff, file) == NULL)
            break;
        list = add(list, pos);
    }


    if(argc==2){
        while (list != NULL) {
            pos = list->pos; //get pointer position
            fseek(file, pos, SEEK_SET);
            fgets(buff, sizeof buff, file);
            buff[strcspn(buff, "\n")] = '\0';
            fprintf(fileopen, "%s\n", buff);
            list = list->next; // get next pointer position

        }
        fclose(file);
        fclose(fileopen);
    }





    if (argv[1]) {
        for (int x = 1; x < argc; x++) {

            filename = argv[x];
            file = fopen(filename, "r");

            if (file) {
                while ((string = fgetc(file)) != EOF) {

                    printf("%c", string);
                }

            }
        }

        FILE *fp;

        char str[1000];
        char rstr[10];
        char ch;
        fp=fopen(argv[1],"r");
        if(fp==NULL)
        {
            printf("This Text is blank");
            return 0;
        }
        fseek(fp,0,SEEK_END);
        ft=ftell(fp);
        while(x<ft)
        {
            x++;
            fseek(fp,-x,SEEK_END);
            ch=fgetc(fp);
            if(ch==' ')
            {
                str[j]=' ';
                j++;
                continue;
            }
            str[j]=ch;
            j++;
        }
        fclose(fp);
        str[j]='\n';
        x=0;
        j=0;
        printf("\nReverse Contents of file are\n");
        while((ch=str[x])!='\0')
        {
            if(ch=='\n')
            {
                while(--j>=0)
                {
                    putchar(rstr[j]);
                }
                j=0;
                printf("\n");
            }
            else
            {
                rstr[j]=str[x];
                j++;
            }
            x++;
        }
        return 0;

    }



}

Node *add(Node *list, long pos){
    Node *node = malloc(sizeof(*node));
    node->pos = pos;
    node->next = list;
    return node;
}