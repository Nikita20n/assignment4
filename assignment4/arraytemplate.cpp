#include <iostream>
#include <algorithm> 
#include <vector> 
using namespace std;


// Template function to sort an array
template <typename T>
void sortArray(T arr[], int size) {
    std::sort(arr, arr + size);
}

int main() {
    int intArray[] = {5, 2, 8, 1, 3};
    double doubleArray[] = {3.14, 1.0, 2.71, 0.5};

    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    sortArray(intArray, intArraySize);
    sortArray(doubleArray, doubleArraySize);

    std::cout << "Sorted intArray: ";
    for (int i = 0; i < intArraySize; ++i) {
        cout << intArray[i] << " ";
    }
    cout <<endl;

    cout << "Sorted doubleArray: ";
    for (int i = 0; i < doubleArraySize; ++i) {
        cout << doubleArray[i] << " ";
    }
    cout <<endl;

    return 0;
}

