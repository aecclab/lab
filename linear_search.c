#include<stdio.h>

void main()
{
	int a[50],i,n,key,flag=0;
	printf("enter the limit ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the number ");
		scanf("%d",&a[i]);
	}
	printf("enter the element to search ");
	scanf("%d",&key);
	for (i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("the element is found at index %d",i);
	}
	else
	{
		printf("the element is not present is the array");
	}
}
