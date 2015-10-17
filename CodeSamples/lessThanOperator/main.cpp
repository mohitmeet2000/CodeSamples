#include <stdio.h>

const char* findNumber(int *x, int size, int number)
{
   for(int i=0;i<size;i++)
    {
      if(!(number<x[i]||x[i]<number))
        return "exist";
        
    }
        return "not exist";
}
int main()
{
	int a[]={2,3,6,5,22,8,4};
    int size=7;
    printf("%s",findNumber(a,size,8));
    return 0;
}
