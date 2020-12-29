#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i,j,flag=0;
    cin>>n>>m;

    char a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y'){flag=1;}
            }
    }
    if(flag==1){cout<<"#Color"<<endl;}
    else cout<<"#Black&White"<<endl;
}
