#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int i,n;
	scanf("%d", &n);
	int *a = (int*)malloc(n*sizeof(int));
	int *b = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		scanf("%d",&b[i]);
		}
		
	int *c = (int*)malloc(n*sizeof(int));
	int *d = (int*)malloc(n*sizeof(int));
	int *e = (int*)malloc(n*sizeof(int));
	int *f = (int*)malloc(n*sizeof(int));
		
		for(i=0;i<n;i++)
		{ c[i]=0;
		while(a[i]>0)
		{ c[i]=c[i]*10 + a[i]%10 ;
		a[i]=a[i]/10 ;
			}
			}
			
			for(i=0;i<n;i++)
		{  
			d[i]=0;
		while(b[i]>0)
	       	{ 
			d[i]=d[i]*10 + b[i]%10 ;
		    b[i]=b[i]/10 ;
			   }
			}	
			for(i=0;i<n;i++)
			e[i]=c[i]+d[i];
		
		for(i=0;i<n;i++)
		{  
			f[i]=0;
		while(e[i]>0)
	       	{ 
			f[i]=f[i]*10 + e[i]%10 ;
		    e[i]=e[i]/10 ;
			   }
			}
		
		for(i=0;i<n;i++)
		{
			printf("%d",f[i]);
			printf("\n");
		}
	return 0;
}
