//code to swap two numbers without using a temporary variable
#include<stdio.h>
int main()
{
	int a,b;
	//input two numbers
	printf("\nEnter two numbers : ");
	scanf("%d%d",&a,&b);
	//original numbers
	printf("\nOriginal values of a and b : %d %d",a,b);
	//swapping
	a=a+b;
	b=a-b;
	a=a-b;
	//swapped value
	printf("\nSwapped values of a and b : %d %d",a,b);
	return 0;   
}

