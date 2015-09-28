#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

int *Sort(int arr1[] , int size)

{
    
    int max=arr1[0];
    for(int i=1;i<size;i++)
        {
            if(max<arr1[i])
                max=arr1[i];
        }
++max;
    int *arr2 = (int *)malloc(max*sizeof(int));
    memset(arr2, 0, max*sizeof(int));
for(int i=0;i<size;i++)
        {
           arr2[arr1[i]]=arr2[arr1[i]]+1;
        }      
for(int i=0;i<max;i++)
    {
        for(int j=0;j<arr2[i];j++)
            {
                printf("%d\n",i);
            }

}


return arr2;
}
int main()
{ 
	int arr[]={5,9,2,6,2,1};
    int size=6;
    int *sortedArray= Sort(arr,size);
	//for(int i=0;i<size;i++)
     //{
       // printf("%d",sortedArray[i]);
     //}
    return 0;
}