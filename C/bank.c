#include<stdio.h>
float balance()
{
	float balance;
	printf("enter account number:\n");
	scanf("%f", &balance );
	
	printf("%f \n" , balance);
	
}
float withdrawal()
{
	float amount;
	printf("enter amount you want withdrawal:\n");
	scanf("%f", &amount);
     "total balance"=="balance"-"withdrawal amount";
	printf("%f\n", amount);
}
 float account()
 {
 	float number;
 	printf("enter your number & detail if you want open your new account:\n");
 	scanf("%f\n",&number);
 	
 	printf("your account has been created");
 	
 }
 int main()
 
 {
   	int choice;
   	printf("enter your choice\n");
   	printf("1. balance\n");
   	printf("2. withdrawal\n");
   	printf("3. account\n");
   	
   	if(choice==1)
   	{
   	  balance();
	}
	else if(choice==2)
	{
		withdrawal();
	}
	else if(choice==3)
	{
		account();
	}
	else
	{
		printf("invalid choice");
	}
	
 	return 0;
 }