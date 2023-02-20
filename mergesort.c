#include<stdio.h>

void mergesort(int a[50], int lb, int ub);
void merge(int a[50], int lb, int ub, int mid);


void main(){

	int a[50],i,n;

	printf("enter the limit");
	scanf("%d", &n);

	for (i=0;i<n;i++){

		printf("\nenter the element :");
		scanf("%d",&a[i]);
	}

	printf("the array is\n");
	for (i=0;i<n;i++){

		printf("%d,",a[i]);
	}

	mergesort(a,0,n);

	printf("the sorted array is\n");
	for (i=0;i<n;i++){

		printf("%d,",a[i]);
	}

}


void mergesort(int a[50], int lb, int ub){

	int mid;

	if(lb<ub){
	
		mid = (lb+ub)/2;
		mergesort(a, lb, mid);
		mergesort(a, mid+1, ub);
		merge(a,lb,ub,mid);	
	
	}

}

void merge(int a[50], int lb, int ub, int mid){
	
	int i,j,k,b[50];
	i = lb;
	j = mid+1;
	k = lb;

	while((i<=mid)&&(j<=ub)){

		if(a[i]<a[j]){
		
			b[k] = a[i];
			k++;
			i++;
		
		}
		else{
		
			b[k] = a[j];
			k++;
			j++;
		
		}
	}
		
	if(i>mid){

		while(j<=ub){
			b[k]=a[j];
			j++;
			k++;
		}
	}
	else{

		while(i<=mid){
			b[k]=a[i];
			i++;
			k++;
		}
	}	


	for(k=0;k<=ub;k++){

		a[k] = b[k];
	}

}


































