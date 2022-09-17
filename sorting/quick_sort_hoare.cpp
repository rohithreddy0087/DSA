#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

int partition(int arr[], int l, int h){
    int pivot = arr[l];
    int i = l-1; int j = h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void qSort(int arr[],int l,int h){
    if(l<h){
        int p=partition(arr,l,h);
        qSort(arr,l,p);
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
