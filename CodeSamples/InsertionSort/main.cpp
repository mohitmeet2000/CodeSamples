#include <stdio.h>


int *Sort(int arr1[] , int size)
{

for(int i=1;i<size;i++)
    {
     int temp=arr1[i];
          for(int j=i-1;j>=0;j--)
                { 
                    if(temp<arr1[j])
                        {
                            arr1[j+1]=arr1[j];
                            arr1[j]=temp;
                        }
                    else 
                        break;
                }
    }
return arr1;
}
int main()
{ 
	int arr[]={100,98,99};
    int size=3;
    int *sortedArray= Sort(arr,size);
	for(int i=0;i<size;i++)
     {
        printf("%d",sortedArray[i]);
     }
    return 0;
}
