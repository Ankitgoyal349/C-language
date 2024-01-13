// conversion of fahrenhiet to celsius 
// here .556 = 5/9 
// 1`c = (f-32)*5/9

// #include<stdio.h>;

int main(){
	int fahr;
	float celsius;
	printf("Enter the temp. in fahrenhiet :- ");
	scanf("%d", &fahr);
	
	celsius = (fahr-32)*.556;
	
	printf("result of given temp fahrenhiet in celsius is:- %f",celsius);
	
	
}