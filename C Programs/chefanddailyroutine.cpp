#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int c1=1,c2=1,c3=1,c4=1,i;
		char s[100001];
		scanf("%s",s);
		for(i=0;s[i];i++)
		{
			if((s[i]=='C')&&(c1==1))
			{
				c2=1;c3=1;
			}
			else if((s[i]=='E')&&(c2==1))
		    {
				c1=0;c3=1;
			}
			else if((s[i]=='S')&&(c3==1))
			{
				c2=0;c1=0;
			}
			else
			{
				printf("no\n");
				c4=0;
				break;
			}
		}
		if(c4==1)
			printf("yes\n");
	}
	return 0;
}
