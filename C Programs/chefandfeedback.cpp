#include<stdio.h>
int main()
{
	int cases,len,check,i;
	char a[100001];
	scanf("%d",&cases);
	while(cases--)
	{
		check=1;
		scanf("%s",a);
		for(len=0;a[len];len++);
		for(i=0;i<len-2;i++)
		{
			if(((a[i]=='0')&&(a[i+1]=='1')&&(a[i+2]=='0'))||((a[i]=='1')&&(a[i+1]=='0')&&(a[i+2]=='1')))
		    {
		    	printf("Good\n");
		    	check=0;
		    	break;
			}
		}
		if(check==1)
		    printf("Bad\n");
	}
	return 0;
}
