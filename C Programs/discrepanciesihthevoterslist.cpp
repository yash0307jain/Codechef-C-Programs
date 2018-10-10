#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	long int a[150000],b[50000],aa,bb,cc,i,j,s=0,t,check=1;
	scanf("%ld%ld%ld",&aa,&bb,&cc);
	for(i=0;i<aa+bb+cc;i++)
		scanf("%ld",&a[i]);
	sort(a,a+aa+bb+cc);
	for(i=1;i<aa+bb+cc;i++)
	{
		if(a[i-1]==a[i])
		{
			if(check==1)
			{
				b[s]=i;
				s++;
				check=0;
			}
		}
		else
		    check=1;
	}
	printf("%ld\n",s);
	for(i=0;i<s;i++)
	    printf("%ld\n",a[b[i]]);
	return 0;
}
