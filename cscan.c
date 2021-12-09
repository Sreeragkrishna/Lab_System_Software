#include<stdio.h>
#include<stdlib.h>
int main()
{
        int arr[100],i,j,n,TotalHeadMoment=0,initial,size,dir;
	printf("Enter the number of Requests\n");
	scanf("%d",&n);
	printf("Enter the Requests sequence\n");
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        printf("Enter initial head position\n");
        scanf("%d",&initial);
        printf("Enter total disk size\n");
        scanf("%d",&size);
	printf("Enter the head movement direction (left=0/right=1)?\n");
        scanf("%d",&dir);

        for(i=0;i<n;i++)
        {
        	for(j=0;j<n-i-1;j++)
        	{
            		if(arr[j]>arr[j+1])
            		{
                		int temp;
                		temp=arr[j];
                		arr[j]=arr[j+1];
                		arr[j+1]=temp;
            		}

        	}
    	}

       int index;
       for(i=0;i<n;i++)
       {
          if(initial<arr[i])
          {
            index=i;
            break;
          }
    	}
   
       if(dir==1)
       {
      		for(i=index;i<n;i++)
        	{
            		TotalHeadMoment=TotalHeadMoment+abs(arr[i]-initial);
            		initial=arr[i];
   			printf("%d\n",initial);
        	}

        	TotalHeadMoment=TotalHeadMoment+abs(size-arr[i-1]-1);
		printf("%d\n",(size-1));
        	TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
                initial=0;
   		printf("%d\n",initial);
        	for(i=0;i<index;i++)
        	{
             		TotalHeadMoment=TotalHeadMoment+abs(arr[i]-initial);
             		initial=arr[i];
   			printf("%d\n",initial);
            
        	}
    	}

        else
    	{
        	for(i=index-1;i>=0;i--)
        	{
            		TotalHeadMoment=TotalHeadMoment+abs(arr[i]-initial);
            		initial=arr[i];
   			printf("%d\n",initial);
        	}

        TotalHeadMoment=TotalHeadMoment+abs(arr[i+1]-0);
	printf("0");
	TotalHeadMoment=TotalHeadMoment+abs(size-1-0);
        initial =size-1;
   	printf("%d\n",initial);
        for(i=n-1;i>=index;i--)
        {
             TotalHeadMoment=TotalHeadMoment+abs(arr[i]-initial);
             initial=arr[i];
             printf("%d\n",initial);
            
        }
        }
	printf("Total head movement is %d",TotalHeadMoment);
        return 0;
}

