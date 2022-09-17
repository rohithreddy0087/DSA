#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    } 

    for(int i=count; i<n; i++){
        arr[i] = 0;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
 
int main() {
    int arr[] =  {10,20,0,0,30,30};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
