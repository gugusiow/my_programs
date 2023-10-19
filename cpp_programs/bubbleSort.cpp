#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
/*Bubble sorting is the simplest sorting algorithm. 
  The concept behind it is repeatedly swapping adjacent elements if they are in the wrong order. 
  Since it does this one-by-one, it is not suitable for large data sets and it has high time complexity. 
*/

  int arr[] = {5, 1, 2, 6, 3, 420, 69, 12, 1314, 35, 727, 1, 30, 11, 0, 39, 21, 24, 87, 55, 69};
  int i, j, tmp, n = sizeof(arr)/sizeof(arr[0]);   //Idk why n = sizeof(arr)/sizeof(arr[0])....can't it just be sizeof(arr)
  
  for(i = 0; i < n - 1; i++) {
    for(j = 0; j < n - i - 1; j++) {
      if(arr[j] > arr[j+1]) { //if the current value of arr[j] is > than the value of the next element (arr[j + 1]), we swap them
        tmp = arr[j + 1];     //we are creating a temporary int to store the value of the next value in the array
        arr[j + 1] = arr[j];  //we then move the value in arr[j] to arr[j + 1]
        arr[j] = tmp;         //finally putting the ori value in arr[j + 1] into arr[j]
      }                       //the numbers keep swapping until the conditions are met
    }
  }

  for(int i: arr) {   //for-each loop to display the array
    cout << i << " ";
  }
    cout << endl;

  string balls = "balls";
  string lmao = "lmao";
    cout << lmao + balls << "\n";

}