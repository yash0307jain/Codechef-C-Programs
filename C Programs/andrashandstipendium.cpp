#include<stdio.h>
int main()
{
	int a[100000],no,cases,s,check,confirm,i;
	scanf("%d",&cases);
	while(cases--)
	{
		s=0;check=0;confirm=0;
		scanf("%d",&no);
		for(i=0;i<no;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]<=2)
			    check=1;
			if(a[i]==5)
			    confirm=1;
			s=s+a[i];
		}
		if(check==1)
		    printf("No\n");
		else
		{
			s=s/no;
			if((s>=4)&&(confirm==1))
			    printf("Yes\n");
			else
			    printf("No\n");
		}
	}
	return 0;
}
