#include<bits/stdc++.h>
using namespace std;
void print(int i,int n)
{
  if(i>n)return;
  cout<<"Adarsh "<<endl;
  i++;
  print(i,n);
}
void print1(int i,int n){
    if(i>n)return;
  cout<< i <<endl;
  i++;
  print1(i,n);
}
void print2(int n){
    if(n==0)return;
    cout<< n <<endl;
    n--;
    print2(n);
}
void print3(int i,int n){
    if(i<1)return;
    print3(i-1,n);
    cout<<i<<endl;
}
void backtrack(int i,int n){
    if(i>n)return;
    backtrack(i+1,n);
    cout<<i<<endl;
}
int main(){
    int i=1,n;
    cin>>n;
    print(i,n);
    print1(i,n);
    print2(n);
    print3(n,n);
    backtrack(1,n);
}