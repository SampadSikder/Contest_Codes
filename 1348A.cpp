#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    //1<<X means 2^x
    int t;
    cin>>t;

    while(t--){
        int n,i,s1=0,s2=0;
        cin>>n;

        s1=(1<<n);

        for(i=1 ; i<n/2; i++){
            s1+=1<<i;
        }
        for(i=n/2 ; i<n; i++){
            s2+=1<<i;
    }
        cout<<s1-s2<<endl;
    }
}
