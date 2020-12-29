#include<bits/stdc++.h>
using namespace std;

int main(){
    int T,n,m,i,j;
    cin>>T;
    while(T--)
        {
           cin>>n>>m;
           int sum=0,c[n];
           char s[n],p[m];
           for(i=0;i<n;i++){
            cin>>s[i];
            }
           for(i=0;i<n;i++){
            cin>>c[i];
           }
           for(i=0;i<m;i++)
            {cin>>p[i];}
            for(i=0;i<m;i++){
                for(j=0;j<n;j++){
                    if(p[i]==s[j])sum+=c[j];
                }
            }
            if(sum!=0)cout<<sum<<endl;
            else cout<<-1<<endl;
        }

    }
