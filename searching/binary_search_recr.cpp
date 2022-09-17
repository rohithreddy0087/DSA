#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int fun(int arr[], int x, int low, int high){
    cout<<mid;
    if(arr[mid]==x){
        return mid;
    }
    if(low>high){
        return -1;
    }
    if(arr[mid]>x){
        high = mid - 1;
        fun(arr, x, low, high);
    }
    else{
        low = mid + 1;
        fun(arr, x, low, high);
    }
}
 
int main() {
    int arr[] =  {10,20,25,28,28,90};
    int n = sizeof(arr)/sizeof(int);
    int x = 28;
    cout<<fun(arr,x,0,n-1);
}
