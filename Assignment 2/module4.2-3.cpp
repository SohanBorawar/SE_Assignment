//Write a program to find the multiplication values and the cubic values using 
//inline function
#include<iostream>
using namespace std;
inline cube(int a)
{
	int result;
	result = a*a*a;
	return result;
}
main()
{
	int a;
	cout<<"enter a number A :";
	cin>>a;
	cout<<"Cube of A is :"<<cube(a);
}