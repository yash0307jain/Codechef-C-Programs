#include<stdio.h>
int main()
{
	int cases,check;
	long long int n,a,b,min,i;
	scanf("%d",&cases);
	while(cases--)
	{
		min=0;check=1;
		scanf("%lld",&n);
		for(i=2;i<n+1;i++)
		{
			if(n%i==0)
			{
				a=n/i;
				b=n/a;
				a=a-b;
				if(a<0)
				    a=-a;
				if(check==1)
				{
					min=a;
					check=0;
				}
				else
				{
					if(min>a)
					    min=a;
				}
			}
		}
		printf("%lld\n",min);
	}
	return 0;
}
