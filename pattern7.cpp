#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*(n-i)-1;k++){
                cout<<"*";
         }
        for(int l=0;l<i;l++){
                    cout<< " ";
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
    print7(n);
    }
}