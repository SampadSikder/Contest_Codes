#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;

    while(t--){
        int n,x;
        cin>>n;
        x=n;
        int a[n];
        for(int i=0;i<n;i++){
            a[i]=x;
            x--;
            }
        for(int i=0;i<n;i++){
            if(a[i]==i+1){swap(a[i],a[i+1]);}
            cout<<a[i]<<endl;
            }
    }

}
