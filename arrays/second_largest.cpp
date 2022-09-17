#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int arr[], int n){
    int max1 = 0;
    int max2 = 0;
    for(int i=0; i<n; i++){
        cout <<max1<<" "<<max2<<"\n";
        if(arr[i]>max1){
            max2 = max1;
            max1 = arr[i];
        }
        if(arr[i]>max2 && max1!= arr[i]) max2 = arr[i];
    } 
    cout <<max1<<max2<<"\n";;
}
 
int main() {
    int arr[] =  {10,20,15,18,19};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
