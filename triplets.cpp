#include<bits/stdc++.h>
typedef long long ll;

using namespace std;

int main(){
    int a[3],b[3],i,s1=0,s2=0;

    for(i=0; i<3; i++){cin>>a[i];}
    for(i=0; i<3; i++){cin>>b[i];}

    for(i=0; i<3; i++){
        if(a[i]>b[i]){s1++;}
        else if(a[i]<b[i]){s2++;}
        }
    cout<<s1<<" "<<s2<<endl;

}
