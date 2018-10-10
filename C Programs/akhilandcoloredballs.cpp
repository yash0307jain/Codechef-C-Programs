#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		char a[100001],b[100001],c[100001];
		scanf("%s",a);
		scanf("%s",b);
		long int i;
		for(i=0;a[i];i++)
		{
			if((a[i]=='W')&&(b[i]=='W'))
			    c[i]='B';
			else if((a[i]=='B')&&(b[i]=='B'))
			    c[i]='W';
			else
			    c[i]='B';
		}
		c[i]=0;
		printf("%s\n",c);
		
	}
	return 0;
}
