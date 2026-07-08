#include<iostream>
#include <cstdio>
using namespace std;
int main(){
    int age=25;
    double grade=3.9;
    double *pointer2=&grade;
    int *pointer=&age;
    printf("age is %d\n",age);
    printf("address is %zu\n", sizeof(age));
    cout<<pointer<<endl;
    cout<<pointer+1<<endl;
    cout<<*pointer2<<endl;
    cout<<pointer2<<endl;
    cout<<++pointer2<<endl;
    
}