
// #include <vector>
// #include <iostream>
// #include <algorithm>
// using namespace std;

// vector<int> merge(int arr[],int low, int mid, int high){
//     int i = low, j = mid,k=0,l=0;
//     vector<int> a;
//     while(i<mid && j<high){
//         // cout<<i<<" "<<j<<endl;
//         if(arr[i]<=arr[j]){
//             a.push_back(arr[i]);
//             i++;
//         }
//         else{
//             a.push_back(arr[j]);
//             j++;
//         }
//     }
//     if(i>=mid){k = j; l = high;}
//     else{k = i; l = mid;}
//     for(k;k<l;k++){
//         a.push_back(arr[k]);
//     }
//     return a;

// }

// void mergeSort(int arr[],int r, int l){
//     if(r>l){
//         int m = (r+l)/2;
//         mergeSort(arr,l,m);
//         mergeSort(arr,m,r);
//         merge()
//     }
    
// }

int main() {
	
    int arr[]={10,14,18,7,15,19,25};
	vector<int> a;
	int n=sizeof(arr)/sizeof(arr[0]);
	a = merge(arr,0,3,n);
	
	for(int i=0;i<n;i++)
	    cout<<a[i]<<" ";
}

#include <iostream>
#include <algorithm>
using namespace std;

void merge(int arr[], int l, int m, int h){
    
    int n1=m-l+1, n2=h-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
        left[i]=arr[i+l];
    for(int j=0;j<n2;j++)
        right[j]=arr[m+1+j];    
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];    
}

void mergeSort(int arr[],int l,int r){
    if(r>l){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
    }
}

int main() {
	
    int a[]={10,5,30,15,7};
	int l=0,r=4;
	
	mergeSort(a,l,r);
	for(int x: a)
	    cout<<x<<" ";
}