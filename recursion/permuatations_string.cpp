#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(string s, string c, string d){
    int lens = s.length();
    int lenc = c.length();
    // cout<<"ret "<<c<<"\n";
    if (lens == lenc){
        cout<<"ret "<<c<<"\n";
		return;
    }
    for (int i ; i < d.length(); i++) {
        string tmp_c = c + d[i];
        string tmp_d = d;
        tmp_d = tmp_d.erase(i, 1);
        cout << tmp_d << "\n";
        fun(s,tmp_c,tmp_d);
    }
    
}
 
int main() {
    string s = "ABCD";
    string c = "";
    string d = s;
    fun(s,c,d);
}
