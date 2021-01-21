#include <stdio.h>
#define maxchar 1000



int main() {
    FILE * file;

  char string [maxchar];
  char* filename = "C:\\Users\\versa\\CLionProjects\\Project 0\\First.txt";

    file=fopen(filename, "r");

    if(file== NULL){
        printf("bad file");
       return 0;
    }

    while(fgets(string,maxchar,file) !=NULL)
        printf( string);
    fclose(file);



    return 0;
}
