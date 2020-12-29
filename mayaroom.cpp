#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,x;
    cin>>n>>m;
    long long int a[m]={0};

    if(m==1){cin>>a[0];}

    else{cin>>a[0]>>a[1];}

    if(m==2)
    {x=(a[0]*a[1]/__gcd(a[0],a[1]));
        cout<<(((n/a[0])+(n/a[1]))-(n/x))<<endl;}

    else
        cout<<n/a[0]<<endl;


}
