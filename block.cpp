#include<iostream>
using namespace std;
int main(){
    int n;cout<<"enter block height: ";cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= n;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
        
    }
    
}

/*
    enter block height: 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
        1 2 3 4 5
*/
