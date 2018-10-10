#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int n,i;
		scanf("%d",&n);
		for(i=1;i<2*n;i=i+2)
		    printf("%d ",i);
		printf("\n");
	}
	return 0;
}
