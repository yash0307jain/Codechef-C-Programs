#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,m,c,t=1,sum=0,temp;
		scanf("%ld%ld%ld",&n,&m,&c);
		if(n<m)
		{
			temp=n;
			n=m;
			m=temp;
		}
		while(1)
		{
			if(n*t==c)
				sum++;
			if(n*t>c)
			    n--;
			else 
			    t++;
			if((t>m)||(n<1))
			    break;
		}
		printf("%ld\n",sum);
	}
	return 0;
}
