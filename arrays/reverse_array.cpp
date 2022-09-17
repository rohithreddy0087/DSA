#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int tmp; 
    for(int i=0; 2*i<n; i++){
        tmp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = tmp;
    } 
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    } 
}
 
int main() {
    int arr[] =  {10,20,15,18,19,65};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
