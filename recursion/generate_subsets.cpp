#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(string s, string c, int i){
    if (i==s.length()){
        cout<<c<<" ";
		return;
    }
    fun(s,c,i+1);
    fun(s,c+s[i],i+1);
    
}
 
int main() {
    string s = "ABC";
    string c = "";
    int i = 0;
    fun(s,c,i);
}
