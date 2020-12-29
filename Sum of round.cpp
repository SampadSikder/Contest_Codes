#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,x[10001]={0},cnt=0;
        cin>>n;
        for(i=10;i<=10000;i*=10){
                if(n==10000){cnt=1;
                            x[i]=n;
                            break;}
                if(n%i!=0){x[i]=n%i;
                            cnt++;}
                n=n-(n%i);


        }
        cout<<cnt<<endl;
        for(i=10;i<=10000;i*=10){

            if(x[i]!=0)cout<<x[i]<<" ";
            }
            cout<<endl;
    }
}

