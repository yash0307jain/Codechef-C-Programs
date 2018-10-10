#include<stdio.h>
int main()
{
	long int cases;
	long long int a,b,c,d,e,f,n,t,aa,bb,cc;
	scanf("%ld",&cases);
	while(cases--)
	{
		scanf("%lld%lld%lld",&a,&b,&n);
		c=b-a;
		aa=a;
		bb=b;
		cc=c;
		if(a>=0)
		{
			d=(-a)%1000000007;
			if(d<0)
			    d=d+1000000007;
			a=a%1000000007;
		}
		else
		{
			d=-a%1000000007;
			a=a%1000000007;
			if(a<0)
			    a=a+1000000007;
		}
		if(b>=0)
		{
			e=(-b)%1000000007;
			if(e<0)
			    e=e+1000000007;
			b=b%1000000007;
		}
		else
		{
			e=-b%1000000007;
			b=b%1000000007;
			if(b<0)
			    b=b+1000000007;
		}
		if(c>=0)
		{
			f=(-c)%1000000007;
			if(f<0)
			    f=f+1000000007;
			c=c%1000000007;
		}
		else
		{
			f=-c%1000000007;
			c=c%1000000007;
			if(c<0)
			    c=c+1000000007;
		}
		if(n>3)
		{
			if((n-4)%6==0)
		        printf("%lld\n",d);
	    	else if((n-4)%6==1)
		        printf("%lld\n",e);
		    else if((n-4)%6==2)
		        printf("%lld\n",f);
		    else if((n-4)%6==3)
		        printf("%lld\n",a);
		    else if((n-4)%6==4)
		        printf("%lld\n",b);
		    else if((n-4)%6==5)
		        printf("%lld\n",c);
		}
		else if(n==3)
		{
			if(cc<0)
			{
				cc=cc%1000000007;
				if(cc<0)
				    cc=cc+1000000007;
				printf("%lld\n",cc);
			}
			else
			{
				cc=cc%1000000007;
				printf("%lld\n",cc);
			}
		}
		else if(n==2)
		{
			if(bb<0)
			{
				bb=bb%1000000007;
				if(bb<0)
				    bb=bb+1000000007;
				printf("%lld\n",bb);
			}
			else
			{
				bb=bb%1000000007;
				printf("%lld\n",bb);
			}
		}
		else if(n==1)
		{
			if(aa<0)
			{
				aa=aa%1000000007;
				if(aa<0)
				    aa=aa+1000000007;
				printf("%lld\n",aa);
			}
			else
			{
				aa=aa%1000000007;
				printf("%lld\n",aa);
			}
		}
	}
	return 0;
}
