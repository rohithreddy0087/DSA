#include <iostream>
using namespace std;

int exactly3Divisors(int N)
    {
        //Your code here
        int count = 1;
        if(N<4){
            return 0;
        }
        for(int i = 3; i*i< N; i++ ){
  
          if(isPrime(i) && (i * i) <= N){
            count++;
          }
        }
        return count;
    }
    
    bool isPrime(int N)
    {
        //Your code here
        if(N==1){
            return false;
        }
        else if(N==2 || N==3){
            return true;
        }
        else if(N%2==0 || N%3==0){
            return false;
        }
        for (int i = 5; i*i<N ; i = i+6){
            cout<<i;
            if(N%i==0||N%(i+2)==0){
                return false;
            }
        }
        return true;
    }

int main() {
    bool c = isPrime(50);
    cout << c;
}