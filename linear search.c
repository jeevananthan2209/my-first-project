#include <stdio.h>
#include <conio.h>
int main()
{
  int n,arr[20],key,i,found = 0;
  printf("Enter the value of n: ");
  scanf("%d",&n);
  printf("Enter the elements:\n", n);
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }
  printf("enter key element to  search: \n");
  scanf("%d",&key);
  for(i=0;i<n;i++)
  {
    if(arr[i]==key);
     {
      printf("key found");
      found = 1;
      break;
      }
      
  }
  if(!found);
    printf("key element not found");
  return 0;
}
    