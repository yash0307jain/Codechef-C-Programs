#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		char a[200000];
		scanf("%s",a);
		int point=0,check=0;
		long long int i,s=0,s0=0,s1=0;
		for(i=0;a[i];i++)
		{
			if(a[i]=='1')
			{
				if(point==1)
				{
					s=s+s0*s1+s1;
					point=0;
				}
				s0=0;
				s1++;
				check=1;
			}
			else
			{
				if(check==1)
				{
					s0++;
					point=1;
				}
			}
		}
		if(point==1)
		{
			s=s+s0*s1+s1;
			point=0;
		}
		printf("%lld\n",s);
	}
	return 0;
}
