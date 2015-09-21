#include <stdio.h>
#include <assert.h>

bool search(int number1 , int arr1[], int size)
{
   for(int i=0;i<size;i++)
    {
       if(number1==arr1[i])
           return true;           
    }
    return false;
}

int main()
{   
    bool result;
    int number;
    const int max_value = 10;
    int arr[max_value];
    int count;
    scanf("%d %d",&count,&number);
    assert(count < max_value);
    for(int i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }
    result=search(number,arr,count);
    if(result)
        printf("number exists");
    else
       printf("not exist");

    
    return 0;
}    
        
  
    


