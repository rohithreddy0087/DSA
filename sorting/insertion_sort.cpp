// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <cmath>
// using namespace std;
// // not correct
// int binarySearch(int arr[], int n, int x){
//     int low = 0, high = n-1;
//     int mid = 0;
//     while(low<=high){
//         mid = (low+high)/2;
//         if(arr[mid] == x){
//             return mid;
//         }
//         else if(arr[mid] < x){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return mid;
// }

// void insertionSort(int arr[], int n){
//     if(n>=2){
//         if(arr[0]>arr[1]){
//             swap(arr[0], arr[0]);
//         }
//     }
    
//     for(int i = 2; i < n; i++){
//        if(arr[i] < arr[i-1]){
//             int pos = binarySearch(arr,i,arr[i]);
//        }
//     }
    
//     for(int i = 0;i < n; i++){
// 	    cout<<arr[i]<<" ";
// 	}
    
// }

// int main() {
// 	int a[] = {2, 1, 3, 4, 9, 6};
// 	insertionSort(a, 6);
// 	return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

void iSort(int arr[],int n){
    
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int main() {
	
    int arr[]={50,20,40,60,10,30};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	iSort(arr,n);
	
	for(auto x: arr)
	    cout<<x<<" ";
}