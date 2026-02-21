// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int n =4;
    int inis =0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<inis;k++){
            cout<<"_";
            
        }inis+=2;
        for(int l=n-i+1;l>0;l--){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i =1;i<=n;i++){
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        for(int k=0;k<2*(n-i);k++){
            cout<<"_";
        }for(int l=i;l>0;l--){
            cout<<"*";
        }
      
    cout<<endl;
        
    }
   

    return 0;
}