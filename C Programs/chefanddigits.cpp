#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long long int l,r,d,t,i,s,j;
		int a[10],b[10],check;
		scanf("%lld%lld",&l,&r);
		for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
			b[i]=0;
		}
		s=r-l+1;
		for(j=l;j<r+1;j++)
		{	
		    t=j;check=1;
			while(t)
			{
				d=t%10;
				b[d]++;
				t=t/10;
			}
			for(i=0;i<10;i++)
		    {
			    if((a[i]==b[i])&&(check==1))
			    {
			    	s--;
			    	check=0;
				}
			    b[i]=0;
		    }
		}
		printf("%lld\n",s);
	}
	return 0;
}
