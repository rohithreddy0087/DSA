#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n, int k = 3){
    int sum = 0;
    int res = 0;
    for(int i=0; i<n; i++){
       if(i < k){
        sum +=arr[i];
        res = sum;
       }
       else{
        int tmp = sum + arr[i] - arr[i-k];
        if(tmp>res) res = tmp;
        sum = tmp;
       }
    }
    cout<<res;
}
 
int main() {
    int arr[] =  {1,8,30,-5,20,7};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n,3);
}
