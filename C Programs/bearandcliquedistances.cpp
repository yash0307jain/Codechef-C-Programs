#include<stdio.h>
#include<malloc.h>
#define MAX 10000000000000000
int main()
{
	int cases;
	long long int k,n,m,s,x,t=0;
	scanf("%d",&cases);
	while(cases--)
	{
		scanf("%lld%lld%lld%lld%lld",&n,&k,&x,&m,&s);
		t=(k*(k-1))/2;
		long long int a[m+t],b[m+t],c[m+t],d[n],i,j,min=0,f[m+t],rmv[n],ind,index[m+t];
		for(i=0;i<m+t;i++)
		{
			f[i]=1;
			index[i]=0;
			if(i<n)
			    rmv[i]=1;
		}   
		for(i=0;i<m;i++)
		{
			scanf("%lld%lld%lld",&a[i],&b[i],&c[i]);
			d[i]=MAX;
			
		}
		t=0;
		for(i=0;i<k-1;i++)
		{
			for(j=i;j<k-1;j++)
			{
				a[m+t]=i+1;
				b[m+t]=j+2;
				c[m+t]=x;
				d[m+t]=MAX;	
			    t++;
			}
		}
		d[s-1]=0;rmv[s-1]=0;
		int ca[n],cb[n],p=0;
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<m+t;j++)
			{
				if(((a[j]==s)||(b[j]==s))&&(f[j]==1))
				{
				    f[j]=0;
					if(a[j]!=s)
					{
						if((c[j]+min)<d[a[j]-1])
						    d[a[j]-1]=c[j]+min;
						index[a[j]-1]=j;
						ca[a[j]-1]=1;
						cb[a[j]-1]=0;
					}
					else
					{
						if((c[j]+min)<d[b[j]-1])
						    d[b[j]-1]=c[j]+min;
						index[b[j]-1]=j;
						ca[b[j]-1]=0;
						cb[b[j]-1]=1;
					}
				}
			}
			if(rmv[p]!=0)
			    min=d[p];
			else
			{
				p++;
				min=d[p];
			}
			for(j=0;j<n;j++)
			{
				if((min>=d[j])&&(rmv[j]==1))
			    {
			    	min=d[j];
			    	ind=j;
			    	s=index[j];
				}
			}
			if(ca[s]==1)
			    s=b[s];
			else
			    s=a[s];
			rmv[ind]=0;
		}
		for(i=0;i<n;i++)
		    printf("%lld ",d[i]);
		printf("\n");
	}
	return 0;
}
