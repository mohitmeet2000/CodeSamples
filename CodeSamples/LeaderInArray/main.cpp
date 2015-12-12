#include <stdio.h>
void findLeaders(int arr1[],int size)
{
        int Leader = arr1[size-1];
        printf("Leader is %d",Leader);
        for(int i=size-1;i>0;i--)
            {
                    if (arr1[i-1]>Leader)
                        {
                                Leader=arr1[i-1];
                                printf("Leader is %d",Leader);
                            
                        }
                    

           }      
 
}
int main()
{
int arr[]={5,17,27,37,47,57};
int size=6;
findLeaders(arr,size);
	return 0;
}
