#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int fun(int n,int a, int b, int c){
    if (n==0){
        return 0;
    }
    if(n<=-1){
        return -1;
    }
    int ret = max(
        fun(n-a,a,b,c),
        max(fun(n-b,a,b,c),
        fun(n-c,a,b,c)));
    
    if (ret==-1) return -1;

    return ret+1;
}
 
int main() {
    int n = 23;
    int a = 12, b = 9, c = 11;
    int ans = 0;
    ans = fun(n,a,b,c);
    cout<<"Answer is:";
    cout << ans;
}