#include <iostream>
#include <cstring>
using namespace std;

class MyString {
private:
    char *str;
    int length;

public:
    MyString(const char *s) {
        length = strlen(s);
        str = new char[length + 1];
        strcpy(str, s);
    }

    ~MyString() {
        delete[] str;
    }

    MyString operator+(const MyString &other) {
        int newLength = length + other.length;
        char *newStr = new char[newLength + 1];
        
        strcpy(newStr, str);
        strcat(newStr, other.str);
        
        MyString result(newStr);
        delete[] newStr;
        return result;
    }

    void display() {
        cout << str;
    }
};

int main() {
    const char *str1 = "Hello ";
    const char *str2 = "world!";
    
    MyString myStr1(str1);
    MyString myStr2(str2);

    MyString result = myStr1 + myStr2;

    cout << "Concatenated String: ";
    result.display();
    
    return 0;
}

