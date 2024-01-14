// program to check whether number is prime or not. 

#include<stdio.h>

int main(){
	int n, count=0, i;
	printf("Enter any number :- ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++){
		if(n%i == 0){
			count++;
		}
	}
	
	if(count ==2){
		printf("%d is a prime number",n);
	}else{
		printf("%d is not a prime number",n);
	}
}