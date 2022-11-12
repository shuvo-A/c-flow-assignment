#include<stdio.h>
int main() {
int num;
printf("Write a number:\n");
scanf("%d",&num);
 if(num %4==0)
printf("%d is leap year\n",num);
 else
printf("%d is not leap year\n",num);

return 0;
}
