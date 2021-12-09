#include<stdio.h>
#include<stdlib.h>
int main()
{
	int f[50],i,c,k,j,p,n,len,a,st;
	for(i=0;i<50;i++)
	{
		f[i]=0;
	}
	printf("enter how many blocks are already allocated\n");
	scanf("%d",&p);
	if(p!=0)
	{
		printf("enter the block numbers that are already allocated\n");
		for(i=0;i<p;i++)
		{
			scanf("%d",&a);
			f[a]=1;
		}
		X:
		printf("enter the starting index block and length");
		scanf("%d%d",&st,&len);
		k=len;
		for(j=st;j<(k+st);j++)
		{
			if(f[j]==0)
			{
				f[j]=1;
				printf("\n%d->%d",j,f[j]);
			}
			else
			{
				printf("\n %d-> file is already allocated\n",j);
				k++;
			}
		}
		printf("do you want to enter more file? yes-1 & no-0\n");
		scanf("%d",&c);
		if(c==1)
		  goto X;
		else
		   exit(0);
	}
	return 0;
}
			


