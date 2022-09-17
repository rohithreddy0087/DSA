#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void fun(int n, char a , char b, char c){
    if (n==1){
        cout<<"Move disc 1 from "<< a << " to " << c <<"\n";
        return;
    }
    fun(n-1,'A','C','B');
    cout<<"Move disc "<< n << " from "<< a << " to " << c <<"\n";
    fun(n-1,'B','A','C');
    
}
 
int main() {
    int n = 3;
    fun(n,'A','B','C');
}
