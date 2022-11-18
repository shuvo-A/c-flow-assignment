#include <stdio.h>
int addNumbers(int num);

int main() 
{
    int num;

    printf("\n##################################################");
    printf("\n<<<<<<<<<<<<< Sum of Natural Number >>>>>>>>>>>>>>>>");
    printf("\n##################################################");
      printf("\nEnter a Number:");
      scanf("%d",&num);
    printf("Sum of the Number is %d",addNumbers(num));


    return 0;
}

int addNumbers(int num)
{
    if (num != 0)
        return num + addNumbers(num - 1);
    else
        return num;
}
