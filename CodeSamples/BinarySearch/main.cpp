#include <stdio.h>


void find(int number1, int arr1[])
{
int mid;
int beg=0;
int end=9;
while(beg<=end)
{
mid=(beg+end)/2;
if(number1==arr1[mid])
{
printf("number exist");
break;
}
if(number1<arr1[mid])
end=mid-1;
if(number1>arr1[mid])
beg=mid+1;
}
}
int main()
{


int arr[]={1,2,3,4,5,6,7,8,9,10};
find(10, arr);
}


