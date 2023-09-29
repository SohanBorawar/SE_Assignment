//WAP to create simple calculator using class
//Write a program of Addition, Subtraction, Division, Multiplication using 
//constructor.
#include<iostream>
#include<string.h>
using namespace std;
class calculate
{
	public: //access modifier there are three types of public, private, protected
	int a,b,sel,result;
	calculate()
	{
		cout<<"Welcome to calculator World !"<<endl;
		cout<<"Enter Number A :"<<endl;
		cin>>a;
		cout<<"Enter Number B :"<<endl;
		cin>>b;
		cout<<"1.Addition"<<endl;
		cout<<"2.Subtraction"<<endl;
		cout<<"3.Multiplication"<<endl;
		cout<<"4.Division"<<endl;
		cout<<"Enter Your Selection :"<<endl;
		cin>>sel;
		if(sel == 1)
		{
			add(a,b);
		}
		else if(sel == 2)
		{
			sub(a,b);
		}
		else if(sel == 3)
		{
			multiply(a,b);
		}
		else if(sel == 4)
		{
			division(a,b);
		}
		else
		{
			cout<<"Invalid Input"<<endl;
		}
		
	} 
	int add(int a,int b)
	{
		result = a+b;
		cout<<"Addition of Two Number Is :"<<result<<endl;
	}
	int sub(int a,int b)
	{
		result = a-b;
		cout<<"Subtraction of Two Number Is :"<<result<<endl;
	}
	int multiply(int a,int b)
	{
		result = a*b;
		cout<<"Multiplication of Two Number Is :"<<result<<endl;
	}
	int division(int a,int b)
	{
		result = a/b;
		cout<<"Division of Two Number Is :"<<result<<endl;
	}
};
main()
{
	char choice;
	choice = 'y';
	while(choice == 'y'){
		calculate obj;
		cout<<"Do you want to continue :";
		cin>>choice;
	}
		
}