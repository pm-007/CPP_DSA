#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int n =4;
   
    for(int i=0;i<=2*(n-1);i++){
        for(int j=0;j<=2*(n-1);j++){
            int top =i;
            int left=j;
            int right=2*(n-1)-j;
            int down=2*(n-1)-i;
            cout<<(n-min(min(left ,right),min(top,down)));
        }
        cout<<endl;
    }

    return 0;
}