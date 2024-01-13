/* The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters. */

#include<stdio.h>

int main(){
	float dis_in_km, in_m, in_feet, in_inch, in_cm; 
	
	printf("ENter the distance between 2 cities in km :- ");
	scanf("%f", &dis_in_km);
	
	in_m = dis_in_km *1000;
	in_feet = dis_in_km *3280.84;
	in_inch = in_feet *12 ;
	in_cm = in_m *100 ;
	
	
	printf("\nDistance in meter is :- %.2f",in_m);
	printf("\nDistance in feet is :- %f",in_feet);
	printf("\nDistance in inch is :- %.2f",in_inch);
	printf("\nDistance in centimeter is :- %.2f",in_cm);
}