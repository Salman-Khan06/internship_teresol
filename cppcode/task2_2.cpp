// atleast two significant digits

#include<iostream>
using namespace std;
int main(){
    int input_arr[]={1,10,123,45,8,25,3,100};
    int size=sizeof(input_arr)/sizeof(input_arr[0]);
    int output_arr[size];
    int index=0;
    for(int i=0;i<size;i++){
        if(input_arr[i]>9){
            output_arr[index]=input_arr[i];
            index++;
        }
    }
    cout<<"elements with atleast two significant digits are: ";
    for(int i=0;i<index;i++){
        cout<<output_arr[i]<<" ";
    }
    return 0;
}