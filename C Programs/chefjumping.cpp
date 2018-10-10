#include<stdio.h>
int main()
{
	long long int n;
	scanf("%lld",&n);
	if((n%3==0)||((n%3==1)&&((n-4)%6!=0)))
	    printf("yes\n");
	else
	    printf("no\n");
	return 0;
}
