//Write a program to Mathematic operation like Addition, Subtraction, 
//Multiplication, Division Of two number using different parameters and 
//Function Overloading

#include<iostream>
using namespace std;

class Calculation {
	public:
		int add(int a, int b) {
			return a + b; 
		}
		double add(double a, double b) {
			return a + b;
		}
		int sub(int a, int b) {
			return a - b;
		}
		double sub(double a, double b) {
			return a - b;
		}
		int mutiply(int a, int b) {
			return a * b;
		}
		double mutiply(double a, double b) {
			return a * b;
		}
		int divide(int a, int b) {
			if (b != 0){
				return a/b;
			}
			else{
				cout << "Error: Division by zero!" << endl;
            return 0; // Return a default value
			}
		}
		double divide(double a, double b) {
			if (b != 0){
				return a/b;
			}
			else{
				cout << "Error: Division by zero!" << endl;
            return 0; // Return a default value
			}
		}
		
};
main() {
	Calculation calculator;
	calculator.add(24,24);
	cout << "result :" <<calculator.add(24.4,24.5); 
	  
}