#include <iostream>
using namespace std;

class Person {
protected:
    std::string name;
    int age;

public:
    Person(const string& n, int a) : name(n), age(a) {}

    void readData() {
        cout << "Enter name: ";
        cin>>name;
        cout << "Enter age: ";
        cin>>age;
    }

    void writeData() const {
        cout << "Name: " << name <<endl;
        cout << "Age: " << age <<endl;
    }
};

class Student : public Person {
private:
    float percentage;

public:
    Student(const string& n, int a, float p) : Person(n, a), percentage(p) {}

    void readData() {
        Person::readData();
        cout<< "Enter percentage: ";
        cin>> percentage;
    }

    void writeData() const {
        Person::writeData();
        cout << "Percentage: " << percentage << "%" <<endl;
    }
};

class Teacher : public Person {
private:
    float salary;

public:
    Teacher(const string& n, int a, float s) : Person(n, a), salary(s) {}

    void readData() {
        Person::readData();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeData() const {
        Person::writeData();
        cout << "Salary: $" << salary <<endl;
    }
};

int main() {
    Student student("parth", 20, 85.5);
    Teacher teacher("smith", 35, 5000.0);

    cout << "Student's Data:" <<endl;
    student.writeData();

    cout << "\nTeacher's Data:" <<endl;
    teacher.writeData();

    return 0;
}

