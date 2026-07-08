#include <iostream>

using namespace std;

struct student
{
    int age;
    float grade;
} s1, s2, *student1;

int main()
{
    s1.age = 24;
    s1.grade = 3.2;
    s2.age = 25;
    s2.grade = 3.8;

    cout << "before changing ----\n"
         << "age is " << s1.age << endl
         << "grade is " << s1.grade << endl;

    student *ptr = &s1;
    student1 = &s1;
    student1->age = 20;
    student1->grade = 0.0;
    // student *ptr2 = &s2;
    // ptr2->age = 50;
    // ptr2->grade = 4.6;
    
    cout << "after change..." << endl;
    cout << "age is = " << s1.age << endl;
    cout << "grade is = " << s1.grade << endl;
}