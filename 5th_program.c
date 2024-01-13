// program to calculate aggregate and percentage marks:--

#include<stdio.h>
int main(){

int phy, che, eng, maths, computer, Aggregate_marks;
float percentage;

printf("Enter the marks of physics out of 100:- ");
scanf("%d",&phy);
printf("\nEnter the marks of chemistry out of 100:- ");
scanf("%d", &che);
printf("\nEnter the marks of english out of 100:- ");
scanf("%d",&eng);
printf("\nEnter the marks of maths out of 100:- ");
scanf("%d",&maths);
printf("\nEnter the marks of computer out of 100:- ");
scanf("%d",&computer);

Aggregate_marks = (phy+che+eng+maths+computer);

printf("\nyour aggregate marks are :- %d", Aggregate_marks);

percentage = Aggregate_marks/5 ;

printf("\nyour percentage is :- %f", percentage);

}