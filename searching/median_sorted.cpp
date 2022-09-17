#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int fun(int arr1[], int n1, int arr2[], int n2){
    int n = n1+n2;
    int arr[n];
    int low = 0, high = n1-1;
    while(low<=high){
        int i1 = (low+high)/2;
        int i2 = n/2-i1;
        if(arr2[i2]>arr1[i1+1]){
            i1++;
        }
    }
    return res;

}
 
int main() {
    int arr1[] =  {10,20,30,40,50};
    int arr2[] =  {5,15,25,30,35,55,65,75,85};
    int n1 = sizeof(arr1)/sizeof(int);
    int n2 = sizeof(arr2)/sizeof(int);
    cout<<fun(arr1,n1,arr2,n2);
}
