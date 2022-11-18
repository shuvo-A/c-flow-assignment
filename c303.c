#include<stdio.h>

int main()
{
int num,prime=0;

 printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>");
 printf("\n<<<<<<<<<<<<< Prime Number or NOT >>>>>>>>>>>>>>>>");
 printf("\n<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>");


 printf("\nEnter the Number:");
 scanf("%d",&num);

 if(num==0 || num==1)
 { 
     printf("\nthese are neither prime nor composite");
 }
 else
{

      for(int i=2;i<=num;i++)
 {
    if(num %i==0)
    {

     prime==1;

    }
 }

 if(prime==0)
 {
        printf("\nIt's a prime number");
 }
 else
 {
  
     printf("\nIt is not a prime number");
 }
}

return 0;

 }
