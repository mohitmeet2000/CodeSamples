#include <stdio.h>

int main()
{

int number;
int arr[10];

printf("enter the number to be searched");
scanf("%d",&number);
printf("insert array details");

for(int i=0;i<10;i++)
{
scanf("%d",&arr[i]);
printf("%d",arr[i]);
}
return 0;
}