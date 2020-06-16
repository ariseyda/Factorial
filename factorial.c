#include<stdio.h>

int main (){
	
	int n ;
	int fact=1;
	
	printf("Enter the number you want to take the factorial of:");
	scanf("%d",&n);
	
	while(n!=0){
		
		fact*=n;
		n--;
		
	}
	printf("Factorial:%d",fact);
	
	
	
}
