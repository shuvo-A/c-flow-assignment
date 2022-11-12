#include <stdio.h>
int main()
{
int English, Math ;
float avg;
printf("Enter English score\n");
scanf("%d",&English);
printf("Enter Math score\n");
scanf("%d",&Math);
avg=(float)(English+Math)/2;
printf("\nThe average Score is:%.2f",avg);

return 0;
}
