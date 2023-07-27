#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks");
	scanf("%d", &marks);
	
	if (marks>70)
	{
		printf("destriction");
	}
	else if (marks>60)
	{
		printf("first class");
		
	}
	else if(marks>50)

	{
	 printf("second class");
	}
	else if(marks>40)
	{
		printf("only pass");
	}
	else if(marks<40)
	
	{
		printf("fail");
	}
	return 0;
	
	
	
	
}