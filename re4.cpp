#include<bits/stdc++.h>
using namespace std;
//reverse a array using 2 pointer
void f(int l,int r,int *a){
    if(l>=r)return;
    swap(a[l],a[r]);
    f(l+1,r-1,a);
}
//
void f1(int i,int a[],int n){
    if(i>=n/2)  return;
    swap(a[i],a[n-i-1]);
    f1(i+1,a,n);
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    f1(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}