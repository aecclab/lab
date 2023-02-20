#include<stdio.h>

void main()
{
	int a[50],i,n,key,low,high,mid;

	printf("enter the limit ");
	scanf("%d",&n);

	printf("enter the array elements in ascending order\n");
	for (i=0;i<n;i++)
	{
		printf("enter the number ");
		scanf("%d",&a[i]);
	}

	printf("enter the element to search ");
	scanf("%d",&key);
	
	low = 0;
	high = n;
	
	while(low<=high)
	{
		mid = (low+high)/2;

		if (a[mid]==key)
		{
			printf("%d found at position %d",key,mid+1);
			break;
		}
		else if(a[mid]<key)
		{
			low = mid+1;
		}
		else
		{
			high = mid-1;
		}
	}
	
	if (low>high)
	{
		printf("%d is not in the array",key);
	}
}





















