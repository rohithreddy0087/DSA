#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int price[], int n){
    
    int profit = 0;

	for(int i = 1; i < n; i++)
	{
		if(price[i] > price[i - 1])
			profit += price[i] - price[i -1];
	}

	cout<<profit;
}
 
int main() {
    int arr[] =  {7,10,4,3,6,5,2,8};
    int n = sizeof(arr)/sizeof(int);
    fun(arr,n);
}
