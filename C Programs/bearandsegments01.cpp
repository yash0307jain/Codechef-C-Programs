#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		char s[100001];
		long int i,check=0,test=0,p=0,x=0;
		scanf("%s",s);
		for(i=0;s[i];i++)
		{
			if(s[i]=='1')
			{
				if(test==1)
				{
					check=1;
					break;
				}
				p=1;
				x=1;
			}
			else
			{
				if(p==1)
				    test=1;
			}
		}
		if(x==0)
		    printf("NO\n");
		else if(check==1)
		    printf("NO\n");
		else
		    printf("YES\n");
	}
	return 0;
}
