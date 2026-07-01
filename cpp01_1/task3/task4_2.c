#include<stdio.h>
int M_fe(int arr[], int size){
    int count = 0;
    int m_f = arr[0];
    for(int i=0; i<size; i++){
        int current_count = 0;
        for(int j=0; j<size; j++){
            if(arr[i] == arr[j]){
                current_count++;
            }
        }
        if(current_count > count){
            count = current_count;
            m_f = arr[i];
        }
    }
    return m_f;
}
int main(){
    int input_array[]= {1,2,2,3,5,3,1,2,3,2,9,3,4,3,2,13,7,8,2,4,3};
    int size = sizeof(input_array)/sizeof(input_array[0]);
    printf("Most frequent element is %d\n",M_fe(input_array, size));
}