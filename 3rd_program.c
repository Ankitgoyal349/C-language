// area of triangle in c

# include <stdio.h>

int main(){
	float base, height, area;
	printf("Enter the value of base :- ");
	scanf("%f", &base);
	printf("\nEnter the value of height :- ");
	scanf("%f",&height);
	
	area = 0.5*(base*height);
	
	printf("\n The area of triangle is :- %f",area);
	
	
}