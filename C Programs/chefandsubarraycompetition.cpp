#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
		long long int n,k,p;
		scanf("%lld%lld%lld",&n,&k,&p);
		if(k>n)
		    k=n;
		long long int i,j,sum,c=0,max,q,r,check=1,t=0,b[p],one=0;
		bool a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			if(a[i]==1)
			    one++;
		}
		char s;
		for(i=0;i<p;i++)
		{
			cin>>s;
			if(s=='!')
			{
				c++;
				check=1;
			}
			else
			{
				if(k>n)
				    b[t++]=one;
				else
				{
					if(check==1)
				    {
					    max=0;sum=0;
				        c=c%n;
				        q=n+1-c-k;
				        r=n-c;
				        for(j=0;j<n;j++)
				        {
					        if(a[(r+j)%n]==1)
					        {
					    	    sum++;
					    	    if(sum==k)
					    	    {
					    		    max=sum;
					    		    break;
							    }
						   }
					        if((j+1)>=k)
					        {
						        if(max<sum)
						            max=sum;
						        if(a[(j+q)%n]==1)
						            sum--;
					        }
				        }
				        check=0;
				    }
				    b[t++]=max;
				}
			}
		}
		for(i=0;i<t;i++)
		    printf("%lld\n",b[i]);
	return 0;
}
