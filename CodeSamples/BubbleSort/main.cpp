#include <stdio.h>


int *Sort(int arr1[] , int size)
{

for(int j=size;j>0;j--)
    {
          for(int i=0;i<j;i++)
                { 
                    if(arr1[i]>arr1[i+1])
                        {
                            int temp=arr1[i+1];
                            arr1[i+1]=arr1[i];
                            arr1[i]=temp;
                        }
                    
                }
    }
return arr1;
}
int main()
{ 
	int arr[]={100,98,99,97,96,1};
    int size=6;
    int *sortedArray= Sort(arr,size);
	for(int i=0;i<size;i++)
     {
        printf("%d",sortedArray[i]);
     }
    return 0;
}
