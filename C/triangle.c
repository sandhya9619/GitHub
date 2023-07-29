#include<stdio.h>
 int main()
{
	int side1,side2,side3;
	printf("enter 1 side\n");
	printf("enter a 2 side\n");
	printf("enter a 3 side\n");
	scanf("%d%d%d",&side1,&side2,&side3);
	
	if(side1==side2==side3)
	{
		printf("is equilateral triangle");
	}
	else if(side1==side2)
	{
		printf("is isosceles triangle");
	}
	else
	{
	   printf("is a scalene triangle");
    }
	return 0;
}