#include <iostream>
using namespace std;
int main(){
    int n;cout<<"enter block height: ";cin>>n;int space ,stars;
    for (int i = 0; i < 2*n; i++)
    {
        if(i<n){
             space=n-i-1;
             stars=2*i+1;

        }
        else if(i==n){
            space=n-i;
            stars=2*i-1;

        }
        else{
             space=i-n;
             stars=2*(2*n-i)-1;
        }
        for(int j=0;j<space;j++)cout<<"  ";
        for(int k=0;k<stars;k++)cout<<"* ";
        cout<<endl;
        
    }
    

}

/*

    * 
  * * *
* * * * *
* * * * *
  * * *
    *

for n=3

*/