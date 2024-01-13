/* Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary. */

# include<stdio.h>

int main(){
	float bs, da, hra, gs;
	
	printf("Enter the basic salary of a person :- ");
	scanf("%f", &bs);
	
	da = (bs*4)/10;
	hra = (bs*2)/10;
	
	gs = bs+da+hra ;
	
	printf("\n basic salary is:- %.2f",bs);
	printf("\n Dearness allowance is:- %.2f",da);
	printf("\n House rent alloowance is:- %.2f",hra);
	printf("\n gross salary is:- %.2f",gs);
}
