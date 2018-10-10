#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n;
		scanf("%ld",&n);
		long long int a,b[n],i;
		long long int sum1=0,sum2=0,suma=0,p=0,max,t=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			if(a>=0)
			{
				p++;
				sum1=sum1+a;
			}
			else
			{
			    b[t++]=a;
			    sum2=sum2+a;
			}
	    }
	    max=(sum1*p)+sum2;
	    sort(b,b+t);
	    for(i=t-1;i>=0;i--)
	    {
	    	sum1=sum1+b[i];
	    	sum2=sum2-b[i];
	    	p++;
	    	suma=(sum1*p)+sum2;
	    	if(suma>max)
	    	    max=suma;
	    	else break;
		}
		printf("%lld\n",max);
	}
	return 0;
}
