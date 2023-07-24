#include<stdio.h>
int main()
{
   int marks;
   printf("enter your marks");
   scanf("%d", &marks);
   
   if(marks>=0&&marks<=33)
   {
      printf("fail");
   }
   if(marks>=33 && marks<=50)
    {
    	printf("third class");
    }
	if (marks>=50 && marks<=70)
	{
		printf(" second class");
	}
	if(marks>=70 && marks<=85)
	{
		printf("first class");
	}
	if(marks>=85 && marks<=100)
	{
		printf("distriction");
	}
	else
	{
		printf("invalid marks");
	}
	
}