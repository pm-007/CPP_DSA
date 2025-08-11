#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter the height";cin>>n;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<i;
            
            
        }
        cout<<endl;
    }
}

/*
   enter the height8
    1
    22
    333
    4444
    55555
    666666
    7777777
    88888888
*/
/*
for simple inverted
     for (int i = n; i >0; i--)
    {
        for (int j = 1; j <=i;j++)
        {
            cout<<j;
        }
        cout<<endl;
        
    }
*/