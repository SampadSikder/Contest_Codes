#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j;
    cin>>n;
    int x[n],d[n],s[n]={0},flag=0;

    for(i=0 ; i<n ; i++){
        cin>>x[i]>>d[i];
        s[i]=x[i]+d[i];
    }
    for(i=0 ; i<n ; i++){
       for(j=0; j<n ; j++){
            if(s[j] == x[i] && s[i] == x[j]){flag=1;}
       }
    }
    if(flag == 1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}
