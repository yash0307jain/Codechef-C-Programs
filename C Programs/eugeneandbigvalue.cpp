#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	long int cases;
	scanf("%ld",&cases);
	while(cases--)
	{
		long long int a,n,m;
		scanf("%lld%lld%lld",&a,&n,&m);
		long long int t=a,r=0,i;
		while(t)
		{
			t=t/10;
			r++;
		}
		char s[r*n+1],p[r*n+1],x[r+1];
		sprintf(p,"%lld",a);
		strcpy(x,p);
		strcpy(s,p);
		while(1)
		{
			for(i=2;i<=n;i=i*2)
		    {
			    strcat(s,p);
			    strcpy(p,s);
		    }
		    i=i/2;
		    if(n-i==0)
		        break;
		    else if(n-i==1)
		    {
		    	strcat(s,x);
		    	break;
			}
			else
			{
				n=n-i;
				strcpy(p,x);
				strcat(s,p);
			}
		}
		printf("%s\n",s);
		printf("%lld\n",(atoi(s))%m);
	}
	return 0;
}
