#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,i,nn=0;
		scanf("%ld",&n);
		long long int a[n],count=0,no=0,max,max2=0,last;
		unsigned long long int sum=0,sum1=0,s=0;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			sum=sum+a[i];
		}
		nn=n;
		if(n%2==0)
		    nn=n-1;
		max=nn/2+1;
		bool f=1;
		nn=0;
		while(1)
		{
			if((no<max)&&(f==1))
				no++;
			else 
			{
			    no--;
				f=0;	
			}
			if(no==0)
		        break;
		    printf("%lld\n",no);
			for(i=nn;i<n;i++)
		    {
			    if(no<=a[i])
			    {
			    	printf("no=%lld,a=%lld\n",no,a[i]);
			    	sum1=sum1+no;
			    	s++;
			    	last=no;
			    	break;
				}
				else
				{
					if(max2<s)
					    max2=s;
					s=0;
					no=0;
					f=1;
					break;
				}
		    }
		}
		if(max2<s)
			max2=s;
		if((s%2!=0)&&(last!=1))
		{
			sum1=0;
			max=s/2+1;
			for(i=1;i<max;i++)
			    sum1=sum1+2*i;
		    sum1=sum1+i;
		}
		if(s%2==0)
		{
			s--;
			sum1=0;
			max=s/2+1;
			for(i=1;i<max;i++)
			    sum1=sum1+2*i;
		    sum1=sum1+i;
		}
		sum=sum-sum1;
		printf("\n%llu\n",sum);
    } 
	return 0;
}
