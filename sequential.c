#include<stdio.h>
#include<stdlib.h>
int main()
{
	int b[50],st,len,c,k,j,i;
	for(i=0;i<50;i++)
	{
		b[i]=0;
	}
	X:
	printf("Enter the string block and length of file\n");
	scanf("%d %d",&st,&len);
	for(j=st;j<(st+len);j++)
	{
		if(b[j]==0)
		{
			b[j]=1;
			printf("\n%d->%d",j,b[j]);
		}
		else
		{
			printf("block already allocated\n");
			break;
		}
	}
		if(j==(st+len))
			printf("the file is allocated to disk\n");
			printf("\n do you want to enter more files?(y-1/n-0)");
			scanf("%d",&c);
		if(c==1)
			goto X;
		else 
			exit(0);
		return(0);
}


