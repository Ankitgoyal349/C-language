// program to calculate the area and circumference of a circle 

#include<stdio.h>

int main(){
	float r, area, circumference;
	printf("Enter the value of r :- ");
	scanf("%f", &r);
	
	area = 3.14*r*r;
	circumference = 2*3.14*r;
	
	
	printf("Circumference of circle is:- %f\n", circumference);
	printf("Area of circle is:- %f\n", area);
	
	
}