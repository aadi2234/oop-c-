#include <stdio.h>
int main()
{
	int year;
	printf("Enter 4-Digit Year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Year is a leap Year");
	}
	else
	{
		printf("Year is not a leap Year");
	}
return(0);
}
