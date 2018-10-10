#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,i,r=0,g=0,b=0;
		scanf("%ld",&n);
		char s;
		for(i=0;i<=n;i++)
		{
			scanf("%c",&s);
			if(i>0)
			{
				if(s=='R')
			       r++;
		     	else if(s=='G')
			        g++;
			    else
			        b++;
			}
		}
		if((r>=b)&&(r>=g))
		    printf("%ld\n",g+b);
		else if((g>=b)&&(g>=r))
		    printf("%ld\n",r+b);
		else
		    printf("%ld\n",r+g);
	}
	return 0;
}
