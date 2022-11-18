#include<stdio.h>

int main()
{
int num,rev=0,digit=0;

 printf("\n=============================================");
 printf("\n =========Reverse the number==========");
 printf("\n=============================================");


 printf("\nEnter the Number:");
 scanf("%d",&num);

while(num!=0)
 { 
     digit=num % 10;
     rev=rev*10+digit;
     num=num/10;
 }

 
        printf("\nThe Reverse number is : %d",rev);
 


return 0;

 }
