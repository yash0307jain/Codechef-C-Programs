#include<stdio.h>
int main()
{
	int cases,i,check;
	char a[11],b[11];
	scanf("%d",&cases);
	while(cases--)
	{
		check=0;
		scanf("%s",a);
		scanf("%s",b);
		for(i=0;a[i];i++)
		{
			if((a[i]!='?')&&(b[i]!='?')&&(a[i]!=b[i]))
			{
				check=1;
				break;
			}
		}
		if(check==1)
		    printf("No\n");
		else
		    printf("Yes\n");
	}
	return 0;
}
