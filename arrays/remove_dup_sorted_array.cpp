#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int count = 1;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[i-1]){
            arr[count] = arr[i];
            count++;
        }
    } 

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
 
int main() {
    int arr[] =  {10,20,20,20,30,30};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
