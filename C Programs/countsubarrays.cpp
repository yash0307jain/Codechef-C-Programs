#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,i,check=0;
		scanf("%ld",&n);
		long long int a[n],sum=n,t=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			if(i>0)
			{
				if(a[i-1]<=a[i])
				{
					t++;
					check=1;
				}
				else
				{
					sum=sum+((t*(t+1))/2);
					t=0;
					check=0;
				}
			}
		}
		if(check==1)
			sum=sum+((t*(t+1))/2);
		printf("%lld\n",sum);
	}
	return 0;
}
