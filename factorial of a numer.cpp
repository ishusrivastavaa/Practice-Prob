#include<stdio.h>
int main()
{
    int  fact=1,number;
    printf("enter a number");
    scanf("%d",number);
    for(int i=1 ; i<=number ; i++);
    {
    fact=fact*i;
    }
   printf("factorial of a number %d is %d",number,fact);
                     return 0;
                     }
