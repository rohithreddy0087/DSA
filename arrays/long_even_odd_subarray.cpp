#include <iostream>
#include <cmath>
using namespace std;


int fun(int arr[], int n)
{   
    int flag = 0;
	if(arr[0]%2 != 0){
        flag = 1;
    }
    int res = 1;
	for(int i = 1; i < n; i++)
	{
        if(flag==1 && arr[i]%2==0){
            res += 1;
            flag = 0;
        }
        else if(flag==0 && arr[i]%2!=0){
            res += 1;
            flag = 1;
        }
        else{
            res = 1;
            if(arr[i]%2==0) flag = 0;
            else flag = 1;
        }
	}

	return res;
}

int main() {
    int arr[] =  {7,10,13,14};
    int n = sizeof(arr)/sizeof(int);
    cout << fun(arr,n);
}
