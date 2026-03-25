#include <stdio.h>

int main()
{
  int n, i, theprime = 0;
  printf("value of n:\n");
  scanf("%d", &n);
  for (i = 2; i<= n/2; i++)
  {
       if(n % i == 0)
       {
        theprime = 1;
         break;
        }
   }     
     if (theprime == 0)
        printf("the number is prime\n");
      else
         printf("the number is not a prime\n"); 
      return 0;    

}