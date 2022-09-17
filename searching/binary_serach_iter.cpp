#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int fun(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]==x){
            return mid;
        }
        else if(arr[mid]>x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;

}
 
int main() {
    int arr[] =  {10,20,25,28,29};
    int n = sizeof(arr)/sizeof(int);
    int x = 10;
    cout<<fun(arr,n,x);
}
