#include <stdio.h>
#include <assert.h>
int *sortarray(int arr2[], int length)
    {
        int low=0;
        int high=length-1;
        while(low<high)
        {
                while((arr2[low]!=1)&&low<high)
                        low++;
                while((arr2[high]!=0)&&low<high)
                        high--;
                
                int temp=arr2[low];
                arr2[low]=arr2[high];
                arr2[high]=temp;
        }      
    return arr2;
}
bool checkarray(int arr3[],int size)
{
    for(int i=0;i<size-2;i++)
    {
        if(arr3[i]<=arr3[i+1]);
        else 
        return false;
   }
    return true;
}
int main()
    {
        
        int arr[]={1,0,1,0,1,0,1,0,0,0};
        int size=sizeof(arr)/sizeof(int);
        int *arr1=sortarray(arr,size);
        assert(checkarray(arr1,size));
        //for(int i=0;i<size;i++)
        //printf("%d",arr1[i]);

        return 0;
    }
