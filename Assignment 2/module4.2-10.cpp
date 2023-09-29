#include <iostream>
using namspace std;
class Matrix {
private:
    int size;
    int* data;

public:
    // Constructor to initialize the matrix with a size
    Matrix(int n) : size(n) {
        data = new int[size];
    }

    // Destructor to release memory
    ~Matrix() {
        delete[] data;
    }

    // Overload the + operator to add two matrices
    Matrix operator+(const Matrix& other) const {
        if (size != other.size) {
            throw std::invalid_argument("Matrix sizes are not compatible for addition.");
        }

        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to display the matrix
    void display() const {
        for (int i = 0; i < size; i++) {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    // Create two matrices
    Matrix matrix1(5);
    Matrix matrix2(5);

    // Initialize matrix1 and matrix2 with values
    for (int i = 0; i < 5; i++) {
        matrix1.data[i] = i + 1;
        matrix2.data[i] = i * 2;
    }

    // Perform matrix addition
    Matrix result = matrix1 + matrix2;

    // Display the result
    cout << "Matrix 1: ";
    matrix1.display();
    cout << "Matrix 2: ";
    matrix2.display();
    cout << "Result: ";
    result.display();

    return 0;
}
