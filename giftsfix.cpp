#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,ma,mb,ans=0;
        cin>>n;
        ll a[n],b[n];
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)cin>>b[i];
        ma=a[0];
        mb=b[0];
        for(i=0;i<n;i++){if(ma>a[i])ma=a[i];}
        for(i=0;i<n;i++){if(mb>b[i])mb=b[i];}
        for(i=0;i<n;i++){ans+=max(a[i]-ma,b[i]-mb);}
        cout<<ans<<endl;
    }
}
