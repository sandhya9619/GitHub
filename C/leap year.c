#include<stdio.h>
int main ()
{
	int year;
	printf("leap year");
	scanf("%d",&year);
	
	if(year%4==0)
	{
	   printf(" is a leap year");
    
	}
	else if (year%100==0)
	{
	 printf("is not leap year");	
    }
    else
    { 
    printf("is a not leap year");
	}
    return 0;
    
}