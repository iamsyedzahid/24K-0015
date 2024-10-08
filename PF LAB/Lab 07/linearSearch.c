#include <stdio.h>
#include <stdbool.h>
int main() {




  int arr[10] = {15,45,78,98,78,56,36,100,17,27};
  int number = 0;
  int i = 0;
  int Index = 0;
  int size = sizeof(arr)/sizeof(arr[0]);
  

  printf("Enter a number: ");
  scanf("%d", &number);


  while(i < size) {

    if(arr[i] == number) {
      printf("%d found at index %d", number, Index);
      Index = i;
    }
    else
    {
      printf("%d not found", number);
    }
    i++;  
  }
  return 0;
}
