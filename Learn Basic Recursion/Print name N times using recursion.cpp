//Print name N times using recursion

#include <bits/stdc++.h>

using namespace std;

void printn(int n){
    if(n==0){
        return ;
    }
    cout<<n<<endl;
    printn(n-1);
    
}
int main(){
    
    int n;
    cin>>n;
    printn(n);
    
    return 0;
}