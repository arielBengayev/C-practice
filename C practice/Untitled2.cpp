#include<stdio.h>

int main(){
	
	int x;
	printf("enter a number: ");
	scanf("%d",&x);
if(x%2==0)
	printf("the number is even");
else{
	printf("the number odd");
	x=x+1;
}	
	printf("new number: %d",x);	

	
	
}