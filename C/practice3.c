#include<stdio.h>
#include<string.h>

int main(){
	
char name[10];

printf("Enter Your Name: \n");
scanf("%s",&name);

int age;

printf("Enter Your Age: \n");
scanf("%d",&age);

int mobile;
printf("Hare We Have This Company Of Mobiles: \n 1) Apple \n 2) Samsung \n 3) Nothing \n 4) Redmi \n 5) Vivo \n ");

scanf("%d",&mobile);


if(mobile == 1){
	
	int Apple;
	printf("Hare We Have This Company Of Mobiles: \n 1) I Phone 12 \n 2) I Phone 13 \n 3) I Phone 14 \n");
	
	scanf("%d",&Apple);
	
	if(Apple == 1) {
		printf("This Mobile Prize Is 45000 \n");
	}
	
	else if(Apple == 2) {
		printf("This Mobile Prize Is 75000 \n");
	}
	
	else if(Apple == 3) {
		printf("This Mobile Prize Is 95000 \n");
	}
		
}

else if(mobile == 2) {
	
	int Samsung;
	printf("Hare We Have This Company Of Mobiles: \n 1) Galaxy S 23 \n 2) alaxy S 23 Plus \n 3) alaxy S 23 Ultra \n");
	scanf("%d",&Samsung);
	
	if(Samsung == 1) {
		printf("This Mobile Prize Is 85000 \n");
	}
	
	else if(Samsung == 2) {
		printf("This Mobile Prize Is 90,000 \n");
	}
	
	else if(Samsung == 3) {
		printf("This Mobile Prize Is 1,00,000 \n");
	}
	
}

else if(mobile == 3) {
	
	int Nothing;
	printf("Hare We Have This Company Of Mobiles: \n 1) Nothing Phone 1 \n 2) Nothing Phone 2 \n");
	scanf("%d",&Nothing);
	
	if(Nothing == 1) {
		printf("This Mobile Prize Is 50,000 \n");
	}
	
	else if(Nothing == 2) {
		printf("This Mobile Prize Is 65,000 \n");
	}
	
}

else if(mobile == 4) {
	
	int Redmi;
	printf("Hare We Have This Company Of Mobiles: \n 1) Redmi 11 \n 2) Redmi 12 \n 3) Redmi 13 \n");
		scanf("%d",&Redmi);
	
	if(Redmi == 1) {
		printf("This Mobile Prize Is 25,000 \n");
	}
	
	else if(Redmi == 2) {
		printf("This Mobile Prize Is 28,000 \n");
	}
	
	else if(Redmi == 3) {
		printf("This Mobile Prize Is 30,000 \n");
	}
	
}

else if(mobile == 5) {
	
	int Vivo;
	printf("Hare We Have This Company Of Mobiles: \n 1) Vivo V23 \n 2) Vivo V25 \n 3) Vivo V27 \n");
		scanf("%d",&Vivo);
	
	if(Vivo == 1) {
		printf("This Mobile Prize Is 27,000 \n");
	}
	
	else if(Vivo == 2) {
		printf("This Mobile Prize Is 35,000 \n");
	}
	
	else if(Vivo == 3) {
		printf("This Mobile Prize Is 43,000 \n");
	}
	
}

else {
		printf("We Don't Have This Mobile");
}

}