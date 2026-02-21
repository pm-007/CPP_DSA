#include <bits/stdc++.h>
using namespace std;
int main (){
   int var = 10;
    int *ptr = &var; // ptr stores the address of var
    // int value = *ptr; // Dereferencing ptr: 'value' becomes 10
    // *ptr = 20;        // Modifying the value at the address: 'var' becomes 20
   
    cout<<"address of var in ptr1= "<<ptr<<" and value is : "<<*ptr<<endl;
    int **ptr2=&ptr;
    cout<<"ptr 2 will store the address of ptr1: "<<ptr2<<" and adress stored inside ptr1  will be : " <<*ptr2<<" and the value inside ptr1 address location will be : "<<**ptr2;

}