#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d,sum;
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        if(sum%2==0){cout<<sum/2<<endl;}
        else {cout<<(sum+1)/2<<endl;}
    }

}
