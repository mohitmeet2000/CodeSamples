#include <stdio.h>
#include <assert.h>
#include <math.h>

bool find(int number1)
{
    long long mid;
    int beg=0;
    int end=number1;
    while(beg <= end)
    {
        mid=(beg + end)/2;
        if((mid*mid)==number1)
        {
            return true;
        }
        else if((mid*mid)>number1)
            end=mid-1;
        else
            beg=mid+1;
    }
    return false;
}

int main()
{
    
    assert(find(4));
    assert(find(1));
    assert(!find(63));
    for (int i = 1; i < 1000000; i++){
        int x = sqrt(i);
        bool isPerfectSquare = (x*x==i);
        assert(find(i) == isPerfectSquare);
    }
    return 0;
}


