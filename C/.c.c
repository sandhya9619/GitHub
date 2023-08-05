#include<stdio.h>

	//int name;
	//float birthdate;
	//float age;
	//int address;
	
//	printf("enter your name\n");
	//scanf("%d",name);
	
	//printf("enter your birthdate\n");
	//scanf("%f",&birthdate);
	
	//printf("enter your age\n");
	//scanf("%f",&age);
	
	//printf("enter your address\n");
	//scanf("%d",&address);
	
	
	//printf("%d%f%f%d\n",&name,&birthdate,&age,&address);
	//return 0;
	
	int name()
	{
		int name;
		printf("enter your name\n");
		scanf("%d",&name);
		 
		 printf("%d\n",&name);
	}
	int age()
	{
		int age;
		printf("enter your age\n");
		scanf("%d",&age);
		
		printf("%d\n",&age);
		
	}
	int birthdate()
	{
		int birthdate;
		printf("enter your birthdate\n ");
		scanf("%d",&birthdate);
		
		printf("%d\n", &birthdate);
	}
	int address()
	{
		int address;
		printf("enter your address");
		scanf("%d",&address);
		
		printf("%d\n",& address);
		
	}
	




int main()
{
	int address();
	int birthdate();
	int age();
	int address();
	
	return 0;
	
	
}