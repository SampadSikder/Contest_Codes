#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j,sum=0;

    cin>>n>>k;
    int a[k],b[n];
    for(i=0;i<k;i++){
        cin>>a[i];
        }
    for(i=1;i<=n;i++){
        b[i]=i;
        for(j=0;j<k;j++){
            if(a[j]==b[i])sum++;
        }
    }
   if(sum==n){cout<<"YES"<<endl;}
   else cout<<"NO"<<endl;
}
