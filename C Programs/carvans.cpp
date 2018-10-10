#include<stdio.h>
int main()
{
	int cases,n,a[10000],min,i,s;
	scanf("%d",&cases);
	while(cases--)
	{
		s=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		    scanf("%d",&a[i]);
		min=a[0];
		for(i=0;i<n;i++)
		{
			if(min>a[i])
			{
				min=a[i];
				s++;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
