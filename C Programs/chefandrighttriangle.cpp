#include<stdio.h>
int main()
{
	long int n,s=0;
	int a[6],x[3],y[3],i;
	scanf("%d",&n);
	while(n--)
	{
		for(i=0;i<6;i++)
		    scanf("%ld",&a[i]);
		x[0]=a[0]-a[2];
		x[1]=a[2]-a[4];
		x[2]=a[4]-a[0];
		y[0]=a[1]-a[3];
		y[1]=a[3]-a[5];
		y[2]=a[5]-a[1];
		for(i=0;i<2;i++)
		{
			if((x[i]*x[i+1]+y[i]*y[i+1])==0)
			    s++;
		}
		if((x[0]*x[2]+y[0]*y[2])==0)
			    s++;
    }
    printf("%ld\n",s);
	return 0;
}
