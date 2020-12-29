#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int a,b,x,y;
        cin>>a>>b;
        x=max(a,b);
        y=min(a,b);
        if(x-y==0){cout<<0<<endl;}
        else if(b>a){
            if((x-y)%2==0){cout<<"2"<<endl;}
            else {cout<<"1"<<endl;}
        }
        else if(a>b){
            if((x-y)%2==0){cout<<"1"<<endl;}
            else cout<<"2"<<endl;
        }

    }

}
