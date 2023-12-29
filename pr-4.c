//4. Write a c program to find even and odd using return with parameter function.
#include<stdio.h>

void main(){
	int no,ans;
	printf("Enter no :-");
	scanf("%d",&no);
	
	if(no % 2 == 0){
		printf("even number");
	}else{
		printf("odd number");
	}
}

int number(int no){
	if(no==0){
		return 0;
	}else{
		return 1;
	}
}

