#include<stdio.h>

void main()
{
	int a[50],i,n,j,temp;

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

	for (i=1;i<n;i++)
	{
		temp = a[i];
		j=i-1;
		
		while (temp<a[j]&&j>=0)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1] = temp;
	}

	printf("\nthe sorted array is \n");
	for (i=0;i<n;i++)
	{
		printf("%d,",a[i]);
	}

}

