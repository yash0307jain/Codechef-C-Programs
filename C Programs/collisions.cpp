#include<stdio.h>
int main()
{
	int cases,i,j,k,sum,temp,size,no,s[10];
	char a[10][10];
	scanf("%d",&cases);
	for(i=0;i<cases;i++)
	{
		sum=0;
		scanf("%d%d",&size,&no);
		for(j=0;j<size;j++)
		{
			scanf("%s",&a[j]);
			s[j]=0;
		}
		for(j=0;j<no;j++)
		{
			for(k=0;k<size;k++)
			{
				if(a[k][j]=='1')
				    s[j]++;
			}
			if(s[j]!=0)
			    s[j]--;
		}
		for(j=0;j<no;j++)
		{
			temp=(s[j]*(s[j]+1))/2;
			sum=sum+temp;
		}
		printf("%d\n",sum);
	}
	return 0;
} 


