#include <stdio.h>

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
if (count==0)
	printf("correct");
		else 
	printf("incorrect");
}

int main()
{
	char * s= "aabb";
	bool result=check(s);
	//printf("%c",result);
	return 0;
}
