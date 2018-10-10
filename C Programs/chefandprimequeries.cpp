#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int nn,q,z,j;
	long long int result,number,p,i;
	scanf("%ld",&nn);
	long long int a[nn];
	for(i=0;i<nn;i++)
		scanf("%lld",&a[i]);
	scanf("%ld",&q);
	long long int l[q],rr[q],xx[q],yy[q],limit[q];
	for(i=0;i<q;i++)
    {
    	scanf("%lld%lld%lld%lld",&l[i],&rr[i],&xx[i],&yy[i]);
    	limit[i]=yy[i];
	}
	sort(limit,limit+q);
	bool sieve[limit[q-1]];
	memset(sieve, false, sizeof(sieve));
    sieve[2]=true;
    sieve[3]=true;
	for (long int x = 1; x*x < limit[q-1]; x++)
	{
		for (long int y = 1; y*y < limit[q-1]; y++)
		{
			long int n = (4*x*x)+(y*y);
			if (n <= limit[q-1] && (n % 12 == 1 || n % 12 == 5))
				sieve[n] ^= true;

			n = (3*x*x)+(y*y);
			if (n <= limit[q-1] && n % 12 == 7)
				sieve[n] ^= true;

			n = (3*x*x)-(y*y);
			if (x > y && n <= limit[q-1] && n % 12 == 11)
				sieve[n] ^= true;
		}
	}
	for (long int r = 5; r*r < limit[q-1]; r++)
	{
		if (sieve[r])
		{
			for (long int i = r*r; i < limit[q-1]; i += r*r)
				sieve[i] = false;
		}
	}
	for(z=0;z<q;z++)
	{
		result=0;
		if(xx[z]==1)
	        xx[z]=2;
	    for(i=xx[z];i<=yy[z];i++)
	    {
	    	if(sieve[i])
	    	{
			    for(j=l[z]-1;j<rr[z];j++)
			    {
				    number=a[j];
				    while(number%i==0)
				    {
					    result++;
					    number=number/i;
				    }
			    }
		    }
	    }
		printf("%lld\n",result);
	}
	return 0;
}
