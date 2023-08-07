#include <iostream>
using namespace std;

class Matrix {
private:
    int size;
    int *data;

public:
    Matrix(int s) : size(s) {
        data = new int[size];
    }

    ~Matrix() {
        delete[] data;
    }

    void fillMatrix() {
        cout << "Enter " << size << " elements for the matrix: ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    void displayMatrix() {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout <<endl;
    }

    Matrix operator+(const Matrix& other) {
        if (size != other.size) {
            cout << "Matrix sizes are different. Addition not possible." <<endl;
            exit(1);
        }

        Matrix result(size);
        for (int i = 0; i < size; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }
};

int main() {
    int size;

    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Enter elements for the first matrix:\n";
    matrix1.fillMatrix();

    cout << "Enter elements for the second matrix:\n";
    matrix2.fillMatrix();

    Matrix sumMatrix = matrix1 + matrix2;

    cout << "Matrix 1: ";
    matrix1.displayMatrix();

    cout << "Matrix 2: ";
    matrix2.displayMatrix();

    cout << "Sum Matrix: ";
    sumMatrix.displayMatrix();

    return 0;
}

