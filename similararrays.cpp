#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,x,sum=0,i;
    cin>>n;
    long long int a[n+1]={0};

    for(i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a,a+(n+1));
    if((n%2)!=0){x=a[(n+1)/2];}
    else{x=a[n/2];}
    for(i=1;i<=n;i++){
        sum+=abs(x-a[i]);
    }

    cout<<sum<<endl;

}
