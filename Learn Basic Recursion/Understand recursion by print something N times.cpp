//Basic recursion

//Understand recursion by print something N times

#include <bits/stdc++.h>

using namespace std;

void printn(int n,int m){
    if(n==0){
        return ;
    }
    printn(n-1,m);
    cout<<m<<endl;
}
int main(){
    
    int n;
    cin>>n;
    printn(n,6);
    
    return 0;
}