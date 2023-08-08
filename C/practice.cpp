#include<stdio.h>
int user(){
	char name[20];
	int age;

	printf("enter your name : \n");
	scanf("%s",&name);

	printf("enter your age : \n");
	scanf("%d",&age);
}
//payment :-
int payment(){
	int price;
	printf("enter your choice 1 is online and 2 is ofline : \n");
	scanf("%d",&price);
			if(price==1)
			{
				printf("online\n");
			}
			else if(price==2)
			{
				printf("ofline\n");
			}
			printf("thank you.........");
}

int iphone(){

	printf("your choice iphone \n");

	printf("three modle available : \n");
	printf("choice 1 is iphone 12 : \n");
	printf("choice 2 is iphone 13 : \n");
	printf("choice 3 is iphone 14 : \n");

	int choice;
	printf("enter your choice : \n");
	scanf("%d",&choice);
	if(choice==1)
	{
		printf("your choice is iphone 12 \n");
		printf("iphone 12 price 50,000\n");
		printf("there are two payment methode available : \n");

		printf(payment ());


	}
	else if(choice==2)
	{
		printf("your choice is iphone 13 \n");
		printf("iphone 13 price 90,000\n");
		printf("there are two payment methode available : \n");

		printf(payment());

	}
	else if(choice==3)
	{
		printf("your choice is iphone 14 \n");
		printf("iphone 14 price 1,50,000\n");
		printf("there are two payment methode available : \n");

		printf(payment());
	}
	else
	{
		printf("your choice is worng \n");
	}
}



int vivo(){
	printf("your choice vivo \n");
}
int redmi(){
	printf("your choice redmi \n");
}
int reilme(){
	printf("your choice reilme \n");
}
int oppo(){
	printf("your choice oppo \n");
}



int main(){
		user();
	int choice;
	printf("enter your choice : \n");
	scanf("%d",&choice);	

	if(choice==1)
	{
		printf(iphone());
	}
	else if(choice==2)
	{
		printf("your choice vivo",vivo());	
	}
	else if(choice==3)
	{
		printf("your choice redmi",redmi());	
	}
	else if(choice==4)
	{
		printf("your choice reilme",reilme());	
	}
	else if(choice==5)
	{
		printf("your choice oppo",oppo());	
	}
	else
	{
		printf("your choice is worng");
	}

	return 0;
}