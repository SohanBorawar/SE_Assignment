//Assume that the test results of a batch of students are stored in three different 
//classes. Class Students are storing the roll number. Class Test stores the marks 
//obtained in two subjects and class result contains the total marks obtained in 
//the test. The class result can inherit the details of the marks obtained in the 
//test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

// Class to store roll number of students
class Students {
protected:
    int rollNumber;

public:
    Students(int roll) : rollNumber(roll) {}

    void displayRollNumber() {
        cout << "Roll Number: " << rollNumber << endl;
    }
};

// Class to store marks obtained in two subjects
class Test : public Students {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    Test(int roll, int s1, int s2) : Students(roll), subject1Marks(s1), subject2Marks(s2) {}

    void displayMarks() {
        cout << "Subject 1 Marks: " << subject1Marks << endl;
        cout << "Subject 2 Marks: " << subject2Marks << endl;
    }
};

// Class to store total marks obtained in the test and calculate the total
class Result : public Test {
public:
    Result(int roll, int s1, int s2) : Test(roll, s1, s2) {}

    int calculateTotalMarks() {
        return subject1Marks + subject2Marks;
    }

    void displayTotalMarks() {
        cout << "Total Marks Obtained: " << calculateTotalMarks() << endl;
    }
};

int main() {
    // Create an instance of the Result class
    Result studentResult(101, 85, 90);

    // Display roll number, marks, and total marks
    studentResult.displayRollNumber();
    studentResult.displayMarks();
    studentResult.displayTotalMarks();

    return 0;
}
