#include<bits/stdc++.h>
using namespace std;
void print4(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i+1;j>1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
     int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
    print4(n);
    }
}