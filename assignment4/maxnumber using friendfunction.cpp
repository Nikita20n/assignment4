#include <iostream>
using namespace std;
class MaxFinder {
private:
    int num1;
    int num2;

public:
    MaxFinder(int n1, int n2) : num1(n1), num2(n2) {}

    friend int findMax(const MaxFinder &mf);
};

int findMax(const MaxFinder &mf) {
    return (mf.num1 > mf.num2) ? mf.num1 : mf.num2;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MaxFinder mf(num1, num2);

    int maxNum = findMax(mf);

    cout << "The maximum number is: " << maxNum <<endl;

    return 0;
}

