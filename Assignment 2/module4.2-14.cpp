//Write a program to find the max number from given two numbers using 
//friend function

#include <iostream>
using namespace std;
class MaxFinder {
private:
    int num1;
    int num2;

public:
	//Constructor to initialize data
    MaxFinder(int a, int b) : num1(a), num2(b) {}

	// Friend Function to access private 
    friend int findMax(MaxFinder mf);
};

int findMax(MaxFinder mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;   // using teranary operator
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    MaxFinder mf(num1, num2);

    int max = findMax(mf);

    cout << "The maximum number is: " << max << endl;

    return 0;
}
