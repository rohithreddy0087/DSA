#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int fun(int arr[], int n, int x){
    int low = 0;
    int high = n-1;
    int res = -1;
    while(low<=high){
        int mid = (low+high)/2;
        // cout << low<<" " << high <<" "<< mid << endl;
        if(arr[mid]==x){
            high = mid - 1;
            // low = mid + 1;
            res = mid;
        }
        else if(arr[mid]>x){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return res;

}
 
int main() {
    int arr[] =  {5,5,5};
    int n = sizeof(arr)/sizeof(int);
    int x = 5;
    cout<<fun(arr,n,x);
}
