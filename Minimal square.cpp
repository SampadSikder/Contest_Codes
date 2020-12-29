#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,x,ans=0;
        cin>>a>>b;
        x=2*a*b;
        while(pow(ans,2)<x){
            ans++;
        }
        cout<<pow(ans,2)<<endl;


    }
}
