#include<stdio.h>
int main()
{
	int cases,n,m,a[1000],b[1000],check,p,i,j;
	scanf("%d",&cases);
	while(cases--)
	{
		check=1;p=0;
		scanf("%d%d",&n,&m);
		for(i=0;i<m;i++)
		    scanf("%d",&a[i]);
		for(i=1;i<n+1;i++)
		{
			check=1;
			for(j=0;j<m;j++)
			{
				if(a[j]==i)
				{
					check=0;
					break;
				}
			}
			if(check==1)
			{
				b[p++]=i;
			}
		}
		for(i=0;i<p;i++)
		{
			if(i%2==0)
			    printf("%d ",b[i]);
		}
		printf("\n");
		for(i=0;i<p;i++)
		{
			if(i%2!=0)
			    printf("%d ",b[i]);
		}
		printf("\n");
	}
	return 0;
}
