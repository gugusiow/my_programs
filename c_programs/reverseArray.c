#include <stdio.h>

int main(){
  int i, temp;
  int inputarray[7] = {1,2,3,4,5,6,7};
  for (i = 0; i < 7/2; i++) { //this n/2 thing is kinda crazy
    // Swap the items
    temp = inputarray[i];
    inputarray[i] = inputarray[7 - i - 1];
    inputarray[7 - i - 1] = temp;
  }

  for (i = 0 ; i < 7; i++) {
    printf("%d, ", inputarray[i]); 
  }
return 0;
}