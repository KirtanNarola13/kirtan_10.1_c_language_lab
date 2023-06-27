#include<stdio.h>

void kirtan(int n){
	n=n*n*n;
	printf("%d",n);
}

void main (){
	int i;
	printf("Enter any number for get cube : ");
	scanf("%d",&i);
	kirtan(i);
}
