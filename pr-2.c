//2. Write a c program to find to find circle area using no return with parameter function

#include<stdio.h>

void main(){
	circle(5);
	circle(6);
}

void circle(int r){
	float ans=3.14*r*r;
	printf("Ans = %.2f\n",ans);
}
