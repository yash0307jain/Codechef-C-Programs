#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n;
		scanf("%ld",&n);
		if(360%n==0)
		    printf("y ");
		else
		    printf("n ");
		if(n<361)
		    printf("y ");
		else
		    printf("n ");
		if(((n*(n+1))/2)<=360)
		    printf("y\n");
		else
		    printf("n\n");
	}
	return 0;
}
