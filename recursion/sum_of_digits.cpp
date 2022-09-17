#include <iostream>
using namespace std;

int fun(int n,int res){
    if(n==0){
        return res;
    }
    res = res + n%10 ;
    fun(n/10,res);
}
 
int main() {
    int n = 2345;
    int sum = 0;
    sum = fun(n,sum);
    cout<<sum;
}