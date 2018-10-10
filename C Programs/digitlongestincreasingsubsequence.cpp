#include<stdio.h>
int main()
{
	int cases,no,a[10],n[10],i;
	scanf("%d",&cases);
	while(cases--)
	{
		scanf("%d",&no);
		for(i=0;i<no;i++)
		    scanf("%d",&n[i]);
		a[0]=5;
		for(i=0;i<no-1;i++)
		{
			if(n[i]<n[i+1])
				a[i+1]=a[i]+1;
			else
			    a[i+1]=a[i]-1;
		}
		for(i=0;i<no;i++)
		    printf("%d",a[i]);
		printf("\n");
	}
	return 0;
}
