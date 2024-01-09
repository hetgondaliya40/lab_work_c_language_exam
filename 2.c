/*
sum 2D array
*/

#include<stdio.h>

void main(){
	
	
	int a[1000][1000];
	int r,c,i,j,sum=0,avg;

	printf("Enter row count :");
	scanf("%d",&r);
	printf("Enter column count :");
	scanf("%d",&c);

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter value [%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
		printf("\n");
	for(i=0; i<r; i++){
			for(j=0; j<c; j++){
				printf(" %d",a[i][j]);
				sum += a[i][j];

		}
		printf("\n");
			}
		printf("\n sum = %d",sum/r*c);

}

