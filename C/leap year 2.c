#include<stdio.h>
int main()
{
	int year;
	printf("enter year");
	scanf("%d", &year);
	
	if(year%4==0)
	{
		printf("ia a leap year");
	}
	
	else if(year%100==0 )
	{
		printf("is not a leap year");
	}
	else
	{
		printf("is not leap year");
	}
	
	return 0;
}