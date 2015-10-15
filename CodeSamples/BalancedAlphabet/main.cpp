#include <stdio.h>
#include <assert.h>
bool check(char *p)
{	int i=0;
    int count=0;
	while(p[i]!='\0')
	{	printf("%c",p[i]);
		if(p[i]=='a')
		count++;
		else if(p[i]=='b')
		{
			count--;
			if(count<0)
				break;
		}
			
			
			i++;
	}

   return (count == 0);
}

int main()
{
	assert(check("aabb"));
	assert(check(""));
	assert(!check("baba"));
	assert(check("aaabbb"));
	assert(!check("b"));
	assert(!check("a"));
	return 0;
}
