#include <iostream>
#include <cmath>
using namespace std;


int fun(int arr[], int n)
{   
   
    int res = arr[0];
    int tmp = arr[0];
    int sum = arr[0];

    int res1 = arr[0];
    int tmp1 = arr[0];
    for(int i = 1; i < n; i++)
	{
        tmp = tmp + arr[i];
        if(tmp<arr[i]) tmp = arr[i];
        if(tmp > res) res = tmp;

        tmp1 = tmp1 + arr[i];
        if(tmp1>arr[i]) tmp1 = arr[i];
        if(tmp1 < res1) res1 = tmp1;
        sum += arr[i];
	}
    res1 =  sum-res1;
    if(res<0) return res;
    if(res1>res){
        res = res1;
    }
	return res;
}

int main() {
    int arr[] =  {-5,-3};
    int n = sizeof(arr)/sizeof(int);
    cout << fun(arr,n);
}
