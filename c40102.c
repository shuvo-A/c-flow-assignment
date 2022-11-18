#include<stdio.h>

int hcf(int num1,int num2);
int main()
{
int num1,num2;

 printf("\n##################################################");
 printf("\n<<<<<<<<<<<<< HCF of Two Number >>>>>>>>>>>>>>>>");
 printf("\n##################################################");


 printf("\nEnter the 1st Number:");
 scanf("%d",&num1);

 printf("\nEnter the 2nd Number:");
 scanf("%d",&num2);

 printf("The Hcf of two number is %d",hcf(num1,num2));

 return 0;
}

int hcf(int num1,int num2)
{
    
      
        if(num2!=0)
        
            return hcf(num2,num1%num2);

        
        else
        
           return num1;
        
    
}