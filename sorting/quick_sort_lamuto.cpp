#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[h];
    int i = l-1; 
    for(int j = l; j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);


    return i+1;

}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p-1);
        qSort(arr,p+1,h);
    }
}
 

int main() {
    int arr[] =  {3,6,12,10,7};
    int n = sizeof(arr)/sizeof(int);
    qSort(arr,0,n-1);

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
}
