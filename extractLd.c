#include <stdio.h>
int main()
{
   int num;
   printf("Enter the value:");
   scanf("%d",&num);
   int ld = num % 10 ;
   printf("the value is  %d",ld);
   return 0;
}