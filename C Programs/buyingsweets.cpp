#include<stdio.h>
int main()
{
	int cases,n,c,a[100],s,check,i,k;
	scanf("%d",&cases);
	while(cases--)
	{
		s=0;check=1;
		scanf("%d%d",&n,&c);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			s=s+a[i];
		}
		k=s/c;
		s=s%c;
		for(i=0;i<n;i++)
		{
			if(s>=a[i])
			{
				check=0;
				break;
			}
		}
		if(check==1)
		    printf("%d\n",k);
		else
		    printf("-1\n");
	}
	return 0;
}
