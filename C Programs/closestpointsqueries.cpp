#include<stdio.h>
int main()
{
	long int cases,j,k,i=0,d,max=0;
	int a[600],b[600];
	char c[600];
	scanf("%ld",&cases);
	while(cases--)
	{
		printf("yash");
		scanf("%c%d%d",&c[i],&a[i],&b[i]);
		max=0;
		if(i>0)
		{
			for(j=i;j>=0;j++)
		    {    
			    for(k=j-1;k>=0;k++)
			    {
			    	if((c[j]=='+')&&(c[k]=='+'))
			    	{
			    		d=(a[j]-a[k])*(a[j]-a[k])+(b[j]-b[k])*(b[j]-b[k]);
			    		if(max<d)
			    		    max=d;
					}
				}
		    }
		    printf("%ld\n",max);
		}
		else if(i==1)
		{
			if((c[0]=='+')&&(c[1]=='+'))
			{
				d=(a[0]-a[1])*(a[0]-a[1])+(b[0]-b[1])*(b[0]-b[1]);
			    printf("%ld\n",d);
			}
			else
			    printf("0\n");
		}
		else if(i==0)
		    printf("0\n");
		i++;
	}
	return 0;
}
