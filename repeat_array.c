#include<stdio.h>
#include<stdlib.h>
void repeat(int arr[], int size)
{
  int i, j;
  printf(" Repeated elements are ");
  for(i = 0; i < size; i++)
    for(j = i+1; j < size; j++)
      if(arr[i] == arr[j])
        printf(" %d ", arr[i]);
}     
 
int main()
{
  int arr[6],i;
    printf("\n Enter the elements for array:");
    for(i=0;i<6;i++)
       scanf("%d",&arr[i]);
  int arr_size = sizeof(arr)/sizeof(arr[0]);  
  repeat(arr, arr_size);
  getch();
  return 0;
}
