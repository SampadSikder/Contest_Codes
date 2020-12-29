#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef long long ll;

int main(){
    ll n,a=0,b=0,cross=0,i;
    cin>>n;

    char s[n];

    scanf("%s",s);

    for(i=0 ; i<n ;i++){
        if(s[i]=='U') a++;
        if(s[i] == 'R') b++;

        if(a==b && a!=0 && b!=0){
            if(s[i]=='U' && s[i+1]=='U'){cross++;}
            else if(s[i]=='R' && s[i+1]=='R'){cross++;}
        }
    }
    cout<<cross<<endl;


    }
