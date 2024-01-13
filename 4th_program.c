// # include<stdio.h>

// program to check eligility for voting 

int main(){
	int age;
	printf("Enter the user age :- ");
	scanf("%d",&age);
	
	if(age>18){
		printf("you are eligible for voting\n");
	}else{
		printf("you are not eligible");
	}
}