#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void reverse(int arr[], int low, int high)
{
	while(low < high)
	{
		swap(arr[high], arr[low]);

		low++;
		high--;
	}
}   

void fun(int arr[], int n, int d)
{
	reverse(arr, 0, d - 1);

	reverse(arr, d, n - 1);

	reverse(arr, 0, n - 1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

 
int main() {
    int arr[] =  {10,20,0,0,30,30};
    int n = sizeof(arr)/sizeof(int);
    int d = 3;
    fun(arr,n,d%n);
}
