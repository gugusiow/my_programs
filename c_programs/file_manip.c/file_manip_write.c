#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  printf("Hello World\n");
  printf("What is your name?\n");
  char name[10];
  scanf("%s", &name);
  // puts(name);  //puts is used to print the string char array
  // printf("Hello %s", name); //u can do it this way as well.
  
  FILE *fileptr;
  // fileptr = fopen("helloballs.txt", "r");
  fileptr = fopen("helloballs.txt", "a");  // a is append mode, can read and write

  // writing into the file
  fprintf(fileptr, "%s\n", name);

  if (fileptr == NULL){
    printf("The file is not opened. Program will now exit.\n");
  } else {
    printf("The file is created successfully.\n");
  }

  fclose(fileptr);

  printf("Do you wish to empty the contents of the file? (0 = No, 1 = Yes) ");
  int val;
  scanf("%d", &val);
  while (val > 1){
    printf("Please enter 0 or 1.\n");
    scanf("%d", &val);
  }
  if (val == 0) {
    FILE *fileptr;
    fileptr = fopen("helloballs.txt", "w+"); // w+ mode -> If the file exists, its contents are overwritten
    printf("Contents of file have been wiped.\n");
    } else if (val == 1) {
    printf("Contents of file have not changed.\n");
  }

return 0;
}
