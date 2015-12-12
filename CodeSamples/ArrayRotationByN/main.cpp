#include <stdio.h>
void arrayRoatationByN(int arr1[],int size,int n)
{
        //int Leader = arr1[size-1];
        //printf("Leader is %d",Leader);
        if(n>size)  
            n=n%size;
        for(int i=0;i<size-n;i++)
            {
                    int result=(size-n+i)%size;
                    int temp=arr1[i];
                    arr1[i]=arr1[result];
                   arr1[result]=temp;
           }

for(int i=0;i<size;i++)
{
printf("%d",arr1[i]);
}     
 
}
int main()
{
int arr[]={7,9,3,6,2,7};
int size=6;
arrayRoatationByN(arr,size,7);

	return 0;
}
