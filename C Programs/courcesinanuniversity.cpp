#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long long int n;
		scanf("%ld",&n);
		long long int a[n],i,max=0;
		for(i=0;i<n;i++)
		{
			scanf("%llld",&a[i]);
			if(max<a[i])
			    max=a[i];
		}
		printf("%lld\n",n-max);
	}
	return 0;
}
