//WAP to take percent marks and total marks from user and calculate how much marks he is obtained.

#include<stdio.h>
int main()
{
	float a; //percent marks
	float b; //total marks
	float c;

	printf("Enter your percent:");
	scanf("%f",&a);

	printf("Enter total marks:");
	scanf("%f",&b);

	c=(b*a)/100;

	printf("%f",c);

	return 0;
	
}