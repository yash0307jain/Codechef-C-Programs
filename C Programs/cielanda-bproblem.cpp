#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d%d",&a,&b);
	a=a-b;
	b=a;
	if(b%10!=0)
	{
		b=b%10;
		a=a/10;
		for(i=1;i<10;i++)
		{
			if(b!=i)
			{
				b=a*10+i;
				break;
			}
		}
	}
	else
	{
		b=b+1;
	}
	printf("%d",b);
	return 0;
}
