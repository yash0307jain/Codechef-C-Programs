#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,q,i,j;
		scanf("%ld%ld",&n,&q);
		long int s[n],a,b,c,d;
		for(i=0;i<n;i++)
		    scanf("%ld",&s[i]);
		while(q--)
		{
			scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
			long int size=b-a+1;
			long int x[size],y[size],t=0,sum=0,f=1;
			for(i=a-1,j=c-1;i<b;i++,j++)
			{
				x[t]=s[i];
				y[t]=s[j];
				t++;
			}
			sort(x,x+t);
			sort(y,y+t);
			for(i=0;i<t;i++)
			{
				if(x[i]!=y[i])
				{
					sum++;
					if(sum==2)
					{
						f=0;
						break;
					}
				}
			}
			if(f==1)
			    printf("YES\n");
			else
			    printf("NO\n");
		}
	}
	return 0;
}

