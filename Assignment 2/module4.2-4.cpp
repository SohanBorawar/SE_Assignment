//Assume a class cricketer is declared. Declare a derived class batsman from 
//cricketer. Data member of batsman. Total runs, Average runs and best 
//performance. Member functions input data, calculate average runs, Display 
//data. (Single Inheritance)

#include <iostream>
#include <string>

class Cricketer {
protected:
    std::string name;
    int age;
    
public:
    void inputCricketerData() {
        std::cout << "Enter Cricketer's Name: ";
        std::cin >> name;
        std::cout << "Enter Cricketer's Age: ";
        std::cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData() {
        inputCricketerData(); // Inherit the input function from the base class
        
        std::cout << "Enter Total Runs Scored: ";
        std::cin >> totalRuns;
        std::cout << "Enter Average Runs Scored: ";
        std::cin >> averageRuns;
        std::cout << "Enter Best Performance (in a single match): ";
        std::cin >> bestPerformance;
    }

    void calculateAverageRuns() {
        // Calculation of average runs can be implemented here
        // For example: averageRuns = totalRuns / numberOfMatches;
    }

    void displayData() {
        std::cout << "\nBatsman Information" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "Total Runs Scored: " << totalRuns << std::endl;
        std::cout << "Average Runs Scored: " << averageRuns << std::endl;
        std::cout << "Best Performance (in a single match): " << bestPerformance << std::endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    
    return 0;
}
