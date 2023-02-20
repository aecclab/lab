#include<stdio.h>


void main()
{
	int a[50],i,n,j,temp,smallest;

	printf("enter the limit ");
	scanf("%d",&n);

	printf("enter the array elements\n");
	for (i=0;i<n;i++)
	{
		printf("enter the number ");
		scanf("%d",&a[i]);
	}
	
	printf("\nthe array is \n");
	for (i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}

	for (i=0;i<n;i++)
	{
		smallest = i;
		for (j=i;j<n;j++)
		{
			if(a[j]<a[smallest])
			{
				smallest = j;
			}
		}
		
		temp = a[i];
		a[i] = a[smallest];
		a[smallest] = temp;

	}

	printf("\nthe sorted array is \n");
	for (i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}

}










