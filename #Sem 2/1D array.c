#include<stdio.h>
main()
{
	int a[5]={1,2,3,4,5};
	int b[5],i;
	
	printf("Without for loop array elements: ");
	printf("%d ",a[0]);
	printf("%d ",a[1]);
	printf("%d ",a[2]);
	printf("%d ",a[3]);
	printf("%d ",a[4]);
	
	printf("\n\nWith for loop: ");
	printf("\n\nEnter the elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&b[i]);
	}
	
	printf("\n\nSize of the array: %lu",sizeof(b));
	printf("\nElements are: ");
	for(i=0;i<5;i++){
		printf("%d ",b[i]);
	}
}
