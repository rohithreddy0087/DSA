#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int max = arr[0],M = 0;
    int min = arr[0],m = 0;
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
            M = i;
        }
        if(arr[i]<min){
            min = arr[i];
            m = i;
        }
        if(m>M){
            M = m;
            max = min;
        }
        
    }
    cout <<M<<" "<<m<<" "<<arr[M] - arr[m]; 
}
 
int main() {
    int arr[] =  {7,10,4,3,6,5,2,8};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
