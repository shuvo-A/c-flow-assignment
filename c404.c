#include<stdio.h>

int main()
{
int i,num1,num2,prime;

 printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>");
 printf("\nDisplaying all prime numbers between two Numbers");
 printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>");


 printf("\nEnter the 1st Number:");
 scanf("%d",&num1);

 printf("\nEnter the 2nd Number:");
 scanf("%d",&num2);

 while (num1<num2)
 {
    prime=0;
 
 if (num1<=1)
 {
    ++num1;
    continue;
 }
 

      for(int i=2;i<=num1;++i)
 {
    if(num1 % i==0)
    {

     prime==1;

     break;

    }
 }

 

 if(prime==0)
 
        printf("\n%d",num1);
    ++num1;
 
 
 }


return 0;

 }


