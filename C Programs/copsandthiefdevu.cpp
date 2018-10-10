#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int cases;
	scanf("%d",&cases);
	while(cases--)
	{
		int m,x,y;
		scanf("%d%d%d",&m,&x,&y);
		int a[m],i;
		for(i=0;i<m;i++)
		    scanf("%d",&a[i]);
		sort(a,a+m);
		int pdt,sum=0;
		pdt=x*y;
		if(a[0]>(pdt+1))
		    sum=a[0]-pdt-1;
		for(i=1;i<m;i++)
			if((a[i]-a[i-1])>(2*pdt+1))
			    sum=sum+a[i]-a[i-1]-2*pdt-1;
		if((100-a[m-1])>pdt)
		    sum=sum+100-a[m-1]-pdt;
		printf("%d\n",sum);
	}
	return 0;
}
