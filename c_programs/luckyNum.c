#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(0)); // this line makes sure every time u run the program, the random number generated is different

  printf("%d\n", rand());

  // limit the range of random numbers, e.g. a deck of cards
  // a deck of cards has 52 cards, so we can do it like this:
 
  int card_number;
  card_number = rand() % 52 + 1; // we + 1 because when 52/52, it will give us 0, so we add 1, since there can't be 0 cards in a deck
  printf("%d\n", card_number);

  /* In general, if you want to have a random number between a and b inclusive, 
     the range of the random number returned by rand() is modified by the following calculation:
     rand() % (b - a + 1) + a
  */

  int luckynum;
  luckynum = rand() % (10);
  printf("Today, your lucky number is %d!\n", luckynum);

return 0;
}
