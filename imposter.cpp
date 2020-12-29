#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,i,j;
    cin>>n>>k;
    int a[k],b[n],flag[1001]={0},cnt=0;

    for(i=0;i<k;i++){
            cin>>a[i];
        }
    for(i=1;i<=n;i++){
        b[i]=i;
        for(j=0;j<k;j++){
            if(a[j]==b[i])
                flag[b[i]]++;

        }
    }
    for(i=1;i<=n;i++){
        if(flag[b[i]]==0)cnt++;
    }
    if(cnt==1){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}


}
