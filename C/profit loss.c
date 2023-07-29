#include<stdio.h>
int main()
{
	float sellingprice,costprice;
	float profit,loss;
	
	printf("enter selling price\n");
	scanf("%f.,&sellingprice");
	
	printf("enter cost price\n");
	scanf("%f",&costprice);
	profit==sellingprice-costprice;
	loss==costprice-costprice;
	
	
	if (sellingprice<costprice)
	{
		printf("profit");
	}
	else if(costprice>sellingprice)
	{
		printf("loss");
	}
	return 0;
}