#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		char a[100001];
		scanf("%s",a);
		int p=0,str,i;
		for(i=0;a[i];i++)
		{
			if(a[i]=='(')
			{
				p++;
			}
			else
			{
				p--;
			}
		}
	}
	return 0;
}
