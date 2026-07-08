#include <iostream>
using namespace std;

void displayname(char name[])
{
    char *pinter = name;
    
    cout << "Enter your name: ";
    cin >> name;
    
    cout << "Your name is: " << name << endl;
    cout << "first character  "
    << *pinter << endl;
    cout << "second character  "
    << *(pinter + 1) << endl;
    cout << "third character  "
    << *(pinter + 2) << endl;
    cout << "address of pinter\n"
    << (void *)pinter << endl;
    char y=*pinter;
}

int main()
{
    char name[20];

    displayname(name);

    return 0;
}