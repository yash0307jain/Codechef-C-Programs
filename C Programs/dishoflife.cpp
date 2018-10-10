#include<stdio.h>
#include<malloc.h>
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		long int n,k,x=1,y=0,z,i,j,init=0,check=0,s=0,t,index,no,a;
		scanf("%ld%ld",&n,&k);
		long int c[k]={0};
		for(z=0;z<n;z++)
		{
			scanf("%ld",&no);
			for(i=0;i<no;i++)
			{
				scanf("%ld",&a);
				if(c[a-1]==0)
				{
					c[a-1]=1;
				    s++;
				    if(s==k)
				        index=z+1;
				}
			}    
		}
		if(s==k)
		{
		    if(index==n)
		        printf("all\n");
		    else
		        printf("some\n");
		}
		else
		    printf("sad\n"); 
	}
	return 0;
}
