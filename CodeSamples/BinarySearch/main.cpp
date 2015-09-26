#include <stdio.h>
#include <assert.h>

bool find(int number1, int arr1[], int size)
{
  int mid;
  int beg=0;
  int end=size - 1;
  while(beg<=end)
  {
    mid = beg + ((end-beg) >> 1); // check http://googleresearch.blogspot.in/2006/06/extra-extra-read-all-about-it-nearly.html
    // also >> operator is usually considered faster than / operator
    if(number1==arr1[mid])
    {
      return true;
    }
    if(number1<arr1[mid])
      end=mid-1;
    if(number1>arr1[mid])
      beg=mid+1;
  }
  return false;
}
int main()
{
  int arr[]={1,2,3,4,5,6,7,8,9,10};
  assert(find(10, arr, sizeof(arr))); // 10 exists in array should return true
  assert(!find(-1,arr,sizeof(arr))); // -1 doesn't exists in array should return false
}


