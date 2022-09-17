#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int fun(int arr[], int n, int sum){
    if (n==0){
        if(sum==0) return 1;
        else return 0;
    }
    return fun(arr,n-1,sum) + fun(arr,n-1,sum-arr[n-1]);
    
}
 
int main() {
    int arr[] = {10,15,25};
    int sum = 25;
    int n = sizeof(arr)/sizeof(int);
    cout << fun(arr,n,sum);
}
