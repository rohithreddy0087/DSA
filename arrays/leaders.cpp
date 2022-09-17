#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int max = arr[n-1];
    cout<<max<<"\n";
    for(int i=n-2; i>=0; i--){
        if(arr[i]>max){
            cout<<arr[i]<<"\n";
            max = arr[i];
        }
    } 
}
 
int main() {
    int arr[] =  {7,10,4,3,6,5,2,8};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
