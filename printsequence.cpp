#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;

int factorial(int a){
    while(a!=1)return a*factorial(a-1);
    }
using namespace std;
int main(){
    ll n,i,j;
    cin>>n;

    int a[n];

    for(i=0;i<n;i++){a[i]=factorial(n);}
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]*a[j]==n)break;
        }
    }
    cout<<a[i]<<" "<<a[j]<<endl;
}
