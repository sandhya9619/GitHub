#include<stdio.h>
int main()
{
	int num,i,sum=0;
	printf("enter a num:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("\n%d",i);
		sum=sum+i;
    }
    printf("\nsum=%d",sum);
}