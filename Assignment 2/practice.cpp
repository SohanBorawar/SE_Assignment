//Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance)

#include<iostream>
#include<string>

using namespace std;

//Base Class Person 
class Person {
	protected:
		string name;
		int age;
			
		// Constructor to initialize Person data
		Person(const string& _name, int _age) : name(_name), age(_age) {}
		
		//Member Function to read data
		void readPersonData(){
			cout << "Enter Name :";
			cin >> name;
			cout << "Enter Age :";
			cin >> age;
		}
	
		//Member function to dispay data
		void displayPersonData() {
			cout << "Name :" << name << endl;
			cout << "Age: " << age << " years" << endl;
		}
};

class Student : public Person {
	protected:
		double percentage;
		
		// Constructor to intialize the data
		Student(const string& _name, int age, int _percentage) : name(_name), age(_age), percentage(_percentage) {}
		
		//Member function to read data
		void readStudentData() {
			readPersonData();
	        cout << "Enter percentage: ";
	        cin >> percentage;
		}
		
		// Member function to display data
		void displayStudentData() {
			displayPersonData();
			cocout << "Percentage: " << percentage << "%" << endl;
		}		
};
class Teacher : public Person {
	protected: //Access Modifier
		int salary;
		
		// Constructor to initialize data
		Teacher(const string&  )
		void readTeacherData() {
			
		}
		
};