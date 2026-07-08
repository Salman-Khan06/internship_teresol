#include <iostream>
using namespace std;

struct Student
{
    string name;
    int age;
    float grade;
};
struct B
{   double a;
    // int a;
    // int b;
    // int c;
    char d;
};

int main()
{
    Student s1;

    cout << "Enter Name: ";
    cin >> s1.name;

    cout << "Enter Age: ";
    cin >> s1.age;

    cout << "Enter Grade: ";
    cin >> s1.grade;

    cout << "\nStudent Information\n";
    cout << "Name  : " << s1.name << endl;
    cout << "Age   : " << s1.age << endl;
    cout << "Grade : " << s1.grade << endl;
    cout << "Size of struct" << sizeof(B)<<endl;
    cout << "Size of struct Student" << sizeof(Student);

    return 0;
}