#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long int n,i,j,check=1;
	scanf("%ld",&n);
	long int a[n],b[n];
	for(i=0;i<n;i++)
	    scanf("%ld",&a[i]);
	long int t=0;
	sort(a,a+n);
	for(i=0;i<n;i++)
		if(a[i-1]!=a[i])
			if(a[i]!=0)
			    b[t++]=a[i];
	sort(b,b+t);
	for(i=0,j=0;i<n;i++)
	{
		if(b[j]!=(i+1))
			printf("%ld ",i+1);
		else if(check==1)
		{
			j++;
			if(j>=(t-1))
			    check=0;
		}
	}
	return 0;
}
