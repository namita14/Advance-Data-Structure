#include<stdio.h>
#include<string.h>

int main(){
  int i , n , first, last, middle;
  char array[100] ;
  char search[20];

  printf("Enter number of characters\n");
  scanf("%d", &n);

  printf("Enter characters\n");

  for (i = 0; i < n; i++){
  	 scanf("%s", &array[i]);
  }
  printf("Enter value to find\n");
  scanf("%c", &search);
  
  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (strcmp(array[middle])< search)
    	first = middle + 1;
    else if strcmp((array[middle]) == search) {
      printf("%c found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %c isn't present in the array.\n", search);

  return 0;
}
