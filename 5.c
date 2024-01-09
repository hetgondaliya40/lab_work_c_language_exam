/*
list n number of laptop using array of objects
*/
#include<stdio.h>
#include<string.h>

struct laptop{

char company_name[100];
char processor[100];
int price;
};

void main(){
	
	struct laptop s;
	struct laptop s1;
	struct laptop s2;
	
	printf("-------laptop1-------\n\n\n");
	printf("enter company name :-");
	scanf("%s",s.company_name);
	printf("enter processor :-");
	scanf("%s",s.processor);
	printf("enter price :-");
	scanf("%d",s.price);
	
	printf("company name is %s\n",s.company_name);
	printf("processor is %s\n",s.processor);
	printf("price is %d\n",s.price);
	
	printf("\n\n\nlaptop2\n\n\n");
	
	printf("enter company name :-");
	scanf("%s",s1.company_name);
	printf("enter processor :-");
	scanf("%s",s1.processor);
	printf("enter price :-");
	scanf("%d",s1.price);
	
	printf("company name is %s\n",s1.company_name);
	printf("processor is %s\n",s1.processor);
	printf("price is %d\n",s1.price);
	
	printf("\n\n\nlaptop3\n\n\n");
	
	printf("enter company name :-");
	scanf("%s",s2.company_name);
	printf("enter processor :-");
	scanf("%s",s2.processor);
	printf("enter price :-");
	scanf("%d",s2.price);
	
	printf("company name is %s\n",s2.company_name);
	printf("processor is %s\n",s2.processor);
	printf("price is %d\n",s2.price);
}

