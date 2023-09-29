Write a program to concatenate the two strings using Operator Overloading

#include <iostream>
#include <string>

class ConcatenatedString {
private:
    std::string str;

public:
    ConcatenatedString(const std::string& s) : str(s) {}

    // Overload the + operator to concatenate two ConcatenatedString objects
    ConcatenatedString operator+(const ConcatenatedString& other) const {
        return ConcatenatedString(str + other.str);
    }

    // Function to get the concatenated string
    std::string getString() const {
        return str;
    }
};

int main() {
    // Create two ConcatenatedString objects
    ConcatenatedString str1("Hello, ");
    ConcatenatedString str2("world!");

    // Concatenate the strings using operator overloading
    ConcatenatedString result = str1 + str2;

    // Display the concatenated string
    std::cout << "Concatenated String: " << result.getString() << std::endl;

    return 0;
}
