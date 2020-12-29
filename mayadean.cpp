#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,a,b,x,sum=0;
    cin>>p>>a>>b;
    int arr[p];
    x=a+b;

    for(int i=0;i<p;i++){
        cin>>arr[i];
        if(x>=arr[i]){sum++;}
    }
        cout<<sum<<endl;
}
