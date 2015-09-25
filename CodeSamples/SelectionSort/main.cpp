#include <stdio.h>

int selectionSort(int arr1[], int size)
{
	int min;
		
	for(int i=0;i<size;i++)
	{   
		for(int j=i+1;j<size;j++)
		{
			if(arr1[j]<arr1[i])
			{
				min=arr1[j];
				arr1[j]=arr1[i];
				arr1[i]=min;
				
			}
		}
	
		
	}
return arr1; 	
}
	

int main()
{
 int *x;
int arr[]={10,9,8,7,6,5,4,3,2,1};
int size=10;	
x= selectionSort(arr,size);
for(int i=0;i<size;i++)
printf("%d",x[i]);	
return 0;	
} 
