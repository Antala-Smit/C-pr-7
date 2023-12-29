//3. Write a c program to find number is palidrome and not palidrome using return with no parameter function

#include<stdio.h>

void main(){
	int ans,check;
	ans = palidrome();
	if(ans == 0){
		printf("palidrome number");
	}else{
		printf("not palidrome number");
	}
}


int palidrome(){
	int no,i,r,rev=0,a;
	printf("Enter Value :-");
	scanf("%d",&no);
	a=no;
	
	while(no>0){
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(rev==a){
		return 0;
	}else{
		return 1;
	}
}
