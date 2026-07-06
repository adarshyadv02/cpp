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
void print6(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
                cout<<"*";
         }
        for(int l=0;l<n-i-1;l++){
                    cout<< " ";
                }
                cout<<endl;
               
}
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        print6(n);
        print7(n);
    }


}