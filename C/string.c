#include<stdio.h>
int main()
{
	char name[20];
	printf("\nenter your name:");
	gets(name);
	printf("name=%s", &name );
	
	char email[20];
	printf("\nenter your email:");
	gets(email);
	printf("email=%s", email );
	
	char password[20];
	printf("\nenter your password");
	gets(password);
	printf("password=%s", password );
	
	char cpassword[20];
	printf("\nenter your cpassword");
	gets(cpassword );
	printf("cpasswor=%s", cpassword);
	
	return 0;
}