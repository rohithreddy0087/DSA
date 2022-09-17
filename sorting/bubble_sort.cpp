#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

void bubbleSort(int arr[], int n){
    int k = 0;
    for(int i=0; i<n-1; i++){
        int j = 1;
        while(j<n-k){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            j++;
        }
        k = k + 1;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}
 
int main() {
    int arr[] =  {10,8,20,5};
    int n = sizeof(arr)/sizeof(int);
    bubbleSort(arr,n);
}
