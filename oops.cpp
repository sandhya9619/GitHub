
#include <iostream>
#include<string>
using namespace std;

class calculater 

{
	public:
		int num1,num2;
	
 void addision()
	 {
	 	cout<<"addision is: "<<num1+num2;
	 }
	
	void substraction()
	{
		cout<<"substraction is:"<<num1-num2;
	}
	void multiplication()
	{
		cout<<"multiplication is:"<<num1*num2;
	}
	void division ()
	{
		cout<<"division is:"<<num1%num2;
	}
};

int main()

{
	  int num1,num2;
	cout<<"enter 1"<<endl;
	cin>>num1>>num2;
	
	int choice;
	cout<<"enter your choice"<<endl;
	cout<<"1. addision"<<endl;
	cout<<"2. substraction"<<endl;
	cout<<"3. multiplication"<<endl;
	cout<<"4. division"<<endl;
	
	cin>>choice;
	calculater c;
	
   if(choice==1)
   {
   	   c.addision();
   }
   
   else if (choice==2)
   {
   	 c.substraction();
   }
   else if(choice==3)
   {
    	 c.multiplication();
   }
   else if (choice==4)
   {
   	  c.division();
   }
   
   else
   {
   	cout<<"choice is invalid"<<endl;
   }
	return 0;
}