#include <stdio.h>
#include <algorithm>
#include <assert.h>
#include <vector>
#include <iostream>
using namespace std;

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
	
void RunTests(size_t iterations, size_t maxSize)
{
    for (auto iter = 0u; iter < iterations; iter++)
    {
        vector<int> container(maxSize);
        std::generate(container.begin(), container.end(), rand);
        auto originalContainer = container;
        selectionSort(container.data(), container.size());
        int prev = *container.begin();
        bool ifFailed = false;
        for (auto iter : container)
        {
            if(!(prev <= iter)) { ifFailed = true; break;}
            prev = iter;
        }
        if (ifFailed)
        {
            cerr << "original:{";
            for(auto iter : originalContainer) cerr << iter <<",";
            cerr<<"}";
            
            cerr << "{";
            for(auto iter : container) cerr << iter <<",";
            cerr<<"}";
            
            assert(false);
        }
    }
}

int main()
{
 int *x;
int arr[]={12,9,8,7,6,5,4,3,2,1};
int size=10;	
// basic test
x= selectionSort(arr,size);
for(int i=0;i<size;i++)
printf("%d",x[i]);	
int arr1[]={1,2,3,4};
selectionSort(arr1, 4);
for (int i = 0;i < 4; i++) cerr << arr1[i]<< endl;
// random tests
RunTests(100/*test iterations*/, 10 /*max array size*/);

// check for array of size 1
RunTests(1, 1);
return 0;	
} 
