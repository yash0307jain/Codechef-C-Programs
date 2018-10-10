#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long long int m,a;
		long int n,k,e,i,j;
		scanf("%ld%ld%ld%lld",&n,&k,&e,&m);
		unsigned long long int s[n-1],sum=0,ans=0;
		for(i=0;i<n-1;i++)
		{
			s[i]=0;
			for(j=0;j<e;j++)
			{
				scanf("%lld",&a);
				s[i]=s[i]+a;
			}
		}
		for(i=0;i<e-1;i++)
		{
			scanf("%lld",&a);
			sum=sum+a;
		}
		sort(s,s+n-1);
		if(s[n-k-1]>=sum)
			ans=s[n-k-1]-sum+1;
		if(ans>m)
		    printf("Impossible\n");
		else
		    printf("%llu\n",ans);
	}
	return 0;
}
