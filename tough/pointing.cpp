#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int *point=arr;
    // int *point2=&arr;
    cout<<*point<<endl;
    cout<<*(point+4)<<endl;
    int* p = &arr[4];
    int* p2 = point + 4;
    cout<<*p<<endl;
    cout<<*p2<<endl;
    
}