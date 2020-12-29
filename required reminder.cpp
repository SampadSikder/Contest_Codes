#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long int x,y,n,i=0,ans=0,cnt=0;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        cnt=n/x;
        ans=x*cnt+y;
        if(ans>n){
            ans-=x;
        }
        cout<<ans<<endl;
    }

    return 0;
}

