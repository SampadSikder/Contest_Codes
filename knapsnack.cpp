#include <bits/stdc++.h>
#include <vector>
using namespace std;

typedef long long ll;

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n,w,sum=0,flag=0;

        cin>>n>>w;

        ll w1[n];

        for(auto i=0; i<n ;i++){
            cin >> w1[i];
            sum += w1[i];
            if(sum > w){
                sum -= w1[i];
                w1[i]=0;
                sum += w1[i];
                continue;
                }
            flag++;
        }
        if(flag!=0){
        cout<<flag<<endl;
        for(auto i=0; i<n ;i++){
            if(w1[i]!=0)cout<<i+1<<" ";}
            cout<<"\n";



        }
        else cout<<"-1"<<endl;






}

}
