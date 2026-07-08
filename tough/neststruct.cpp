#include <iostream>
using namespace std;

struct Address
{
    string street;
    string city;
    int zip;
};

struct Person
{
    string name;
    int age;
    Address address;    
}p1;

int main(){
    // Person p1;
    p1.name = "Salman Khan";
    p1.age = 23;

    p1.address.street = "Street 10";
    p1.address.city = "Rawalpindi";
    p1.address.zip = 46000;

    cout << "Person Information" << endl;
    cout << "------------------" << endl;
    cout << "Name   : " << p1.name << endl;
    cout << "Age    : " << p1.age << endl;
    cout << "Street : " << p1.address.street << endl;
    cout << "City   : " << p1.address.city << endl;
    cout << "ZIP    : " << p1.address.zip << endl;

    return 0;
}