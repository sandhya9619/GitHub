#include<stdio.h>
int main()

{
	int a,b,c,maximum;
	
	printf("enter the value of a,b,c : \n");
	scanf("%d %d %d \n", &a,&b,&c);
	
	if(a>b &&a>c)
	{
		printf("a is maximum number");
	
	}
	else if (b>c)
	{
		printf("b is maximum number");
		
	}
	else 
	{
		printf("c is maximum number");
		
	}
	return 0;
	
	
	
}