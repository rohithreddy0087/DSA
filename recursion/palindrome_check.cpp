#include <iostream>
using namespace std;

bool fun(string s, int start, int end){
    if(start >= end){
        return true;
    }
    return (s[start]==s[end])&&(fun(s,start+1,end-1));
}
 
int main() {
    string s = "abbcbba";
    bool ret = fun(s,0,s.length()-1);
    cout << ret ;
}