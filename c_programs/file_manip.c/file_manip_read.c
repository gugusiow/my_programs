#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  // opening and writing to a file
  FILE *filepointer;
  // filepointer = fopen("helloballs.txt", "r");

  char name[20];
  // printf("What's your name? ");
  // scanf("%s", &name);
  
  // filepointer = fopen("helloballs.txt", "a");
  // if (filepointer == NULL) {
  //   printf("Failed to open the file! ");
  //   return 0;
  // }

  // fprintf(filepointer, "%s\n", name);

  // fclose(filepointer);

  // opening and reading from a file
  FILE *filepointer2;
  filepointer2 = fopen("helloballs.txt", "r");

  // safety message, in a more friendly way
  if (filepointer2 == NULL) {
    printf("Failed to open the file! ");
    return 0;
  }

  // fscanf(filepointer2, "%s", name);
  // printf("%s", name);

  // a while loop to read the whole file until end-of-file,
  // instead of just 1 line
  while (fscanf(filepointer2, "%s", name) != EOF) {
        // Print one entry
        printf("Name: %-30s\n", name);
    }
  
return 0;
}
