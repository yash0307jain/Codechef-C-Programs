#include<stdio.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int a,b,i=0;
		scanf("%d%d",&a,&b);
		while(1)
		{
			i++;
			if(i%2!=0)
			{
				a=a-i;
				if(a<0)
				{
					printf("Bob\n");
					break;
				}
			}
			else
			{
				b=b-i;
				if(b<0)
				{
					printf("Limak\n");
					break;
				}
			}
		}
	}
	return 0;
}
