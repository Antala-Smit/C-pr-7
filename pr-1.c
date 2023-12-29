//1. Write a c program to find rate of interest using simple function.

#include<stdio.h>

void main(){
	interest();
}

void interest(){
	float p,r,n,interest;
	
	printf("Enter principal amount :- ");
	scanf("%f",&p);
	printf("Enter interest rate :- ");
	scanf("%f",&r);
	printf("Enter time period :- ");
	scanf("%f",&n);
	
	interest = (p*r*n)/100;
	
	printf("rate of interest :- %.2f",interest);
}
