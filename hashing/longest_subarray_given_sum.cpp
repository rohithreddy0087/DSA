#include <bits/stdc++.h>
using namespace std;

int longestSubarraySum(int arr[], int n, int sum)
{
    unordered_map<int,int> s;
    int pre_sum = 0;
    int ret = 0;
    for(int i = 0; i < n; i++)
    {   
        if(pre_sum==sum)
            ret = i ;
        pre_sum += arr[i];
        auto it = s.find(pre_sum-sum);
        if(it != s.end()){
            ret = max(ret,i-it->second);
        }

        s[pre_sum] = i;
    }
    return ret;
}

int main()
{
    int arr[] = {3,1,0,1,8,2,3,6,1,1,1,1,1};
    int sum=5;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << longestSubarraySum(arr, n, sum);
}