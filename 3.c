/*
average 1D array
*/
#include<stdio.h>
main()
{
	int a[10],b[10],c[20];
	int n,i;
	
	printf("Enter Array size = ");
	scanf("%d",&n);
	
	for(i=0; i<n; i++){
		printf("Enter count A :");
		scanf("%d",&a[i]);
	
	}
		for(i=0; i<n; i++){
		printf("Enter count B :");
		scanf("%d",&b[i]);
	
	}
	for(i=0; i<n; i++){
		c[i]=a[i]+b[i];
	}
	
	
	for(i=0; i<n; i++){
		printf("  %d",c[i]);
	
}
	

}
