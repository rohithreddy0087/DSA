#include <bits/stdc++.h>
using namespace std;

void pointer_fn(){
    int var = 20;

    int* ptr = &var;
    *ptr = 30;
    int **ptr1 = &ptr;

    int ***ptr2 = &ptr1;
    cout<< &var <<"\n";
    cout<< ptr <<"\n";
    cout<< &ptr <<"\n";
    cout<< *ptr << "\n";

    cout<< ptr1 << "\n";
    cout<< &ptr1 << "\n";
    cout<< *ptr1 << "\n";
    cout<< **ptr1 << "\n";


    cout<< ptr2 << "\n";
    cout<< &ptr2 << "\n";
    cout<< *ptr2 << "\n";
    cout<< **ptr2 << "\n";
}

int main() {
    pointer_fn();
}