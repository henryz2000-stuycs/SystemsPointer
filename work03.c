#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main(){
  int b[10]; //creates a 10 int array
  srand(time(NULL)); //seeds random number generator
  int i = 0; //index of array
  int x; //random number
  for (x = rand(); i < 10; i++){
    b[i] = x; //sets random number to each index
    x = rand(); //sets x to next random number
    if (i == 9){ //sets last value in array to 0
      b[i] = 0;
    }
    printf("b[%d] = %d\n", i, b[i]); //prints each value in array
  }

  printf("\n");
  
  int arr[10];
  int *p = b; //memory location of b
  for (i = 9; i >= 0; i--){ //starts at end of arr
    arr[i] = *p; //sets equal to value of b at pointer
    p++; //sets pointer to next value
    printf("arr[%d] = %d\n", i, arr[i]); //prints each value in array
  }
  
  return 0;
}
