#include<stdio.h>
int main()
{
	char a[100000];
	int i,b[4];
	scanf("%s",a);
	for(i=0;i<4;i++)
	    b[i]=0;
	for(i=0;a[i];i++)
	{
		if(a[i]=='C')
	    {
	    	b[0]++;
		}
		else if((a[i]=='H')&&(b[0]>0))
		{
	    	b[0]--;
	    	b[1]++;
		}   
		else if((a[i]=='E')&&(b[1]>0))
		{
	    	b[1]--;
	    	b[2]++;
		}    
		else if((a[i]=='F')&&(b[2]>0))
		{
	    	b[2]--;
	    	b[3]++;
		}
	}
	printf("%d\n",b[3]);
	return 0;
} 


