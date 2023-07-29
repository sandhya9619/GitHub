#include<stdio.h>

void square()
{
	float length;
	printf("enter length \n ");
	scanf("%f %f",&square);
	float area = length* length;
	
	printf("%f \n",area);
}
  

int rectangle()
{
	float length,height;
	printf("enter length & height of the rectangle \n");
	scanf("%f %f",&length,&height);
	float area= length * height;
	
	printf("%d \n",area);
	
}
int circle()

{
	float radius;
	printf("enter the radius of the circle \n");
	scanf("%f",&circle);
	float area=3.14 * radius* radius;
	
	printf("%d \n",area);
	
}
 main()
{
	int choice;
	printf("enter your choice\n");
	printf("1. square\n");
	printf("2. rectangle\n");
	printf("3.circle\n");
	scanf("%d",&choice);
	
	
	if(choice == 1)
	{
		square();
	}
	else if(choice==2)
	{
		rectangle();
	}
	else if(choice==3)
	{
		circle();
	}
	else
	{
		printf("invalid choice\n");
	}
	
	return 0;
}

	
//	
//	float length,breadth,height, area;
//	
//	 printf ("\nenter length of cube to find there area,");
//	 scanf("%f",& length);
//	 
//	 printf("\nenter breadth of cube to find there area");
//	 scanf("%f", &breadth);
//	 
//	 printf("\n enter height of cube to find there area");
//	 scanf("%f", &height);
//	 
//	 area =	length* breadth*height;
//	 
//	 printf("area of cube: %0.2f", area);
//	 return 0;	
