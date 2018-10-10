#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long long int n,p,i,k;
		scanf("%lld%lld",&n,&p);
		long long int a[n];
		long long int j;
		k=((n*(n+1))/2);
		long long int b[k],max=0,sum=0,s=0,t=0,ss=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			ss=ss+a[i];
			s=0;
			for(j=i;j>0;j--)
			{
				s=s+a[j];
				b[t]=s%p;
			    if(max<b[t])
			    {
			    	max=b[t];
			    	sum=0;
				}
			    if(max==b[t])
			        sum++;
			    t++;
			}		
	    	b[t]=ss%p;
			if(max<b[t])
			{
			   	max=b[t];
			   	sum=0;
			}
			if(max==b[t])
		        sum++;
			t++;
		}    
		printf("%lld %lld\n",max,sum);
	}
	return 0;
}
