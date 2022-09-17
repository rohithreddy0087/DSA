#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int count = 1;
    int ind = 0;
    vector<int> a;
    for(int i=1; i<n; i++){
        if(arr[i]==arr[i-1]){
            count++;
            if(i==n-1) a.push_back(count);
        }
        else{
            a.push_back(count);
            count = 1;
            if(i==n-1) a.push_back(count);
        }
    }
    int odd = 0;
    int even = 0; 
    for(int i=0;i<a.size();i++){
        if(i%2==0) odd += 1;
        else even += 1;
    }
    int flag = 1;
    if (odd < even) flag = 0;
    int sum = 0;
    int print = 0;
    for(int i=0;i<a.size();i++){
        if(i%2==flag){
            if(a[i]==1) print = sum;
            else print = sum+a[i];
            cout<<"Flip "<<sum<<" to "<<print<<"\n";
        }
        sum += a[i];
    }
}
 
int main() {
    int arr[] =  {1,0,1,0,1,0,0,0,1};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
