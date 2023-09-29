#include<iostream>
#include<string>
using namespace std;
class Cricketer
{
	protected: // Access modifier protected: it means the it is simmilar to private but with one 
//key difference that it can be accessed by in class and by the derived class
		string name;
		int age;
	
	public:
		void inputCricketerData() {
        cout << "Enter Cricketer's Name: ";
        cin >> name;
        cout << "Enter Cricketer's Age: ";
        cin >> age;
    }
	
};

class Batsman : public Cricketer {
	private:
		int totalRuns;
		int averageRuns;
		int bestPerformance;
		int numberOfMatches;
	
	public:
    void inputBatsmanData() {
        inputCricketerData(); // Inherit the input function from the base class
        
        cout << "Enter Total Runs Scored: ";
        cin >> totalRuns;
        cout << "Enter Average Runs Scored: ";
        cin >> averageRuns;
        cout << "Enter Best Performance (in a single match): ";
        cin >> bestPerformance;
    }
    
    void calculateAverageRuns() {
    	cout<<"Enter Total Number Of Matches :";
    	cin>>numberOfMatches;
       averageRuns = totalRuns / numberOfMatches;
    }
    
    void displayData() {
        cout << "\nBatsman Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << " years" << endl;
        cout << "Total Runs Scored: " << totalRuns << endl;
        cout << "Average Runs Scored: " << averageRuns << endl;
        cout << "Best Performance (in a single match): " << bestPerformance << endl;
        cout << "Average Runs :" << averageRuns << endl;
    }
};
int main()
{
	Batsman batsman;
	batsman.inputBatsmanData();
	batsman.calculateAverageRuns();
	batsman.displayData();
	
	return 0;
}