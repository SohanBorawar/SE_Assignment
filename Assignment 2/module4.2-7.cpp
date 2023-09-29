//Create a class person having members name and age. Derive a class student 
//having member percentage. Derive another class teacher having member 
//salary. Write necessary member function to initialize, read and write data. 
//Write also Main function (Multiple Inheritance)

#include <iostream>
#include <string>
using namespace std;

// Base class Person
class Person {
public:
    string name;
    int age;

    // Constructor to initialize Person data
    Person(const string& _name, int _age) : name(_name), age(_age) {
	}

    // Member function to read Person data
    void readPersonData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    // Member function to display Person data
    void displayPersonData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
    }
};

// Derived class Student
class Student : public Person {
public:
    double percentage;

    // Constructor to initialize Student data
    Student(const std::string& _name, int _age, double _percentage) : Person(_name, _age), percentage(_percentage) {}

    // Member function to read Student data
    void readStudentData() {
        readPersonData();
        std::cout << "Enter percentage: ";
        std::cin >> percentage;
    }

    // Member function to display Student data
    void displayStudentData() {
        displayPersonData();
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    double salary;

    // Constructor to initialize Teacher data
    Teacher(const std::string& _name, int _age, double _salary) : Person(_name, _age), salary(_salary) {}

    // Member function to read Teacher data
    void readTeacherData() {
        readPersonData();
        std::cout << "Enter salary: $";
        std::cin >> salary;
    }

    // Member function to display Teacher data
    void displayTeacherData() {
        displayPersonData();
        std::cout << "Salary: $" << salary << std::endl;
    }
};

int main() {
    // Create a Student object
    Student student("Alice", 20, 85.5);

    // Create a Teacher object
    Teacher teacher("Mr. Smith", 35, 50000.0);

    // Display Student and Teacher data
    std::cout << "Student Data:" << std::endl;
    
    student.displayStudentData();

    std::cout << "\nTeacher Data:" << std::endl;
    teacher.displayTeacherData();

    return 0;
}
