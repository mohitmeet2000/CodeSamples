#include <stdio.h>

int *selectionSort(int arr1[], int size)
{
	int min,temp;
		
	for(int i=0;i<size;i++)
	{   min=i;
		for(int j=i+1;j<size;j++)
		{	
			if(arr1[j]<arr1[i])
			{
				min=j;
				
			}
		}
	temp=arr1[i];
	arr1[i]=arr1[min];
	arr1[min]=temp;
		
	}


return arr1; 	
}
	

int main()
{
 int *x;
int arr[]={12,9,8,7,6,5,4,3,2,1};
int size=10;	
x= selectionSort(arr,size);
for(int i=0;i<size;i++)
printf("%d",x[i]);	
return 0;	
} 
