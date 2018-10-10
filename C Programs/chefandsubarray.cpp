#include<stdio.h>
#include<malloc.h>
int main()
{
	int cases,n,s,p,count,i,j;
	scanf("%d",&cases);
	while(cases--)
	{
		count=0;
		scanf("%d",&n);
		long long int a[n];
		for(i=0;i<n;i++)
		    scanf("%lld",&a[i]);
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				s=a[i]+a[j];
				p=a[i]*a[j];
				if(s==p)
				     count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}
