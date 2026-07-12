#include<bits/stdc++.h>
using namespace std;
//parameterised
void f(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }
    f(i-1,sum+i);
}

void fac(int i,int fact){
    if(i==1){
        cout<<fact<<endl;
        return;
    }
    fac(i-1,fact*i);
}

//functional
int f1(int n){
    if(n==0){
        return 0;
    }
    return n+f1(n-1);
}
 
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main(){
    int n;
    cin>>n;
    f(n,0);
    cout<<f1(n)<<endl;
    cout<<fact(n)<<endl;
    fac(n,1);
}