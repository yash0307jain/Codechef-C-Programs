#include<stdio.h>
#include<math.h>
int main()
{
	long int cases;
	scanf("%ld",&cases);
	while(cases--)
	{
		long long int n,a,b,i;
		scanf("%lld",&n);
		for(i=0;i<=n;i++)
		    if(n<=pow(2,i))
		        break;
		a=pow(2,i);
		a=a-n;
		b=pow(2,i-1);
		b=n-b;
		if(a>b)
		    printf("%lld\n",b);
		else
		    printf("%lld\n",a);
	}
	return 0;
}
