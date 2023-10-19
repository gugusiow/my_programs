#include <stdio.h>

int main(){

//user-input
int height;
do {
  printf("Height: ");
  scanf("%i", &height); //rmb the & symbol
}
while (height > 12 || height < 1);  

//print pyramid
for (int row = 0; row < height; row++){
  //space
  for (int space = height - row - 1; space > 0; space--){  //number of spaces on the left = height - 1
    printf(" ");
  }
  //left-side
  for (int left_blocks = 0; left_blocks < row + 1; left_blocks++){  //must be < row + 1, because the first row is row 0
    printf("#");
  }
  
  //gap
    printf("  ");

  //right-side
  for (int right_blocks = 0; right_blocks < row + 1; right_blocks++){
    printf("#");
  }
  printf("\n");
}

return 0;
}