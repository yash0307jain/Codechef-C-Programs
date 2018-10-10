#include<stdio.h>
int main()
{
	int cases,n;
	scanf("%d",&cases);
	while(cases--)
	{
		scanf("%d",&n);
		if(360%n==0)
		    printf("y ");
		else
		    printf("n ");
		if(n!=0)
		    printf("y ");
		else
		    printf("n ");
		if((n!=0)||(n!=1))
		    printf("y\n");
		else
		    printf("n\n");
	}
	return 0;
}
