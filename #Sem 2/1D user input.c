#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	
	printf("\n\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n\nEntered elements: ");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
