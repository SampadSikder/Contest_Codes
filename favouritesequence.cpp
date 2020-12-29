#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,i,j;
        cin>>n;

        ll a[n],b[n];

        for(i=0; i<n; i++)cin>>a[i];

        for(i=0,j=0 ; i<n ; i+=2 ,j++) b[i]=a[j];
        for(i=1,j=n-1 ; i<n ; i+=2,j--) b[i]=a[j];

        for(i=0; i<n; i++)cout<<b[i]<<" ";
        cout<<"\n";

}

}
