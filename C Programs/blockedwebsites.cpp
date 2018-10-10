#include<iostream>
#include<string.h>
#include<stdio.h>
#include<malloc.h>
using namespace std;
int main()
{
	long long int n,i,j,k,l,a,b,c,d,e=0,f,g,h;
	scanf("%lld",&n);
	char *x[n],*y[n],term[100001],zz,zzz,*aaa[n],temp[10001];
	term[0]='\0';
	for(i=0,j=0,k=0;i<n;i++)
	{
		cin>>zz;
		e=0;
		if(zz=='+')
		{
			cin>>zzz;
			if(zzz!='\0')
			{
				x[j]=(char *)calloc(strlen(term)+1,sizeof(char));
                x[j][e]=zzz;
                term[e]=x[j][e];
                term[e+1]='\0';
                e++;
			}
			else
			{
				x[j]=(char *)calloc(strlen(term)+1,sizeof(char));
				x[j][e]='\0';
			}
			    
		}
			//cin>>x[j++];
		else
		{
			cin>>zzz;
			if(zzz!='\0')
			{
				y[k]=(char *)calloc(strlen(y[k])+1,sizeof(char));
                y[k][e++]=zzz;
			}
			else
			{
				y[k]=(char *)calloc(strlen(x[k])+1,sizeof(char));
				y[k][e]='\0';
			}
			    
		}
		    //cin>>y[k++];
	}
	c=0;e=0;
	for(i=0;i<k;i++,e++)
	{
		bool aa[n]={0};
		for(l=0;y[i][l];l++)
		{
			b=0;
			if(j>0)
			{
				for(a=0;a<j;a++)
				{
					if(l==0)
					{
						if(y[i][l]==x[a][l])
					    {
						    b=1;
						    aa[a]=1;
					    }
					}
					else if(aa[a]==1)
					{
						if(y[i][l]==x[a][l])
							b=1;
						else
						    aa[a]=0;
					}
				}
			}
			if((b==1)&&(y[i][l+1]=='\0'))
			{
				c++;
				e--;
				break;
			}
			else
				aaa[e][l]=y[i][l];
			if(b==0)
			{
				aaa[e][l+1]='\0';
				break;
			}
		}
	}
	if(c==k)
	    cout<<"-1\n";
	else
	{
	    for (i=0;i<e-1;i++)
	    {
            for (j=i+1;j<e;j++)
            {
                if (strcmp(aaa[i],aaa[j])>0)
                {
                    strcpy(temp,aaa[i]);
                    strcpy(aaa[i],aaa[j]);
                    strcpy(aaa[j],temp);
                } 
            }
        }
        long long int xx=e;
        if(xx==0)
            xx++;
        long long int t=1,b[xx];
        b[0]=0;
        for(i=1;i<e;i++)
        {
        	if(strcmp(aaa[i-1],aaa[i])!=0)
        	    b[t++]=i;
		}
		cout<<t<<"\n";
        for (i=0;i<t;i++)
            cout<<aaa[b[i]]<<"\n";
	}
	return 0;
}       
