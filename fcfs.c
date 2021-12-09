#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100],seek_count=0,distance, cur_track,n,head,i;
	printf("Enter the number of Requests\n");
	scanf("%d",&n);
        printf("Enter the Requests sequence\n");
        for(i=0;i<n;i++)
	     scanf("%d",&arr[i]);
        printf("Enter initial head position\n");
        scanf("%d",&head);

	for(i=0;i<n;i++) 
	{
        	cur_track = arr[i];
 		distance = abs(cur_track - head);
 		seek_count += distance;
		head = cur_track;
        }
 
    printf("\n Total number of seek operations = %d",seek_count);

    printf("\n Seek Sequence is");
    for (int i = 0; i < n; i++) 
	{
                printf("%d\n",arr[i]);
	}
    return 0;
}
