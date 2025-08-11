#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter  height: ";cin>>n;
    // for simple inverted 
    // for (int i = n; i >0; i--)
    // {
    //     for (int j = 1; j <=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     cout<<endl;
        
    // }
// 12345
// 1234
// 123
// 12
// 1
// for same number
    for (int i = n; i >0; i--)
    {
        for (int j = 1; j <=i;j++)
        {
            cout<<i;
        }
        cout<<endl;
        
    }

}