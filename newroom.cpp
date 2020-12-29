#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n,cnt=0;
    cin>>n;
    int a[n];
    int m;
    cin>>m;
    long int b[m];

    for(int i=0;i<n;i++){
        a[i]=i+1;
        }
    if(m==2){cin>>b[0]>>b[1];
            for(int i=0;i<n;i++){
                if(a[i]%b[0]==0&&a[i]%b[1]==0){cnt++;}
                else if(a[i]%b[0]==0)cnt++;
                else if(a[i]%b[1]==0)cnt++;
        }
    }

    if(m==1){cin>>b[0];
            for(int i=0;i<n;i++){
                if(a[i]%b[0]==0){cnt++;}
            }
    }



    cout<<cnt<<endl;
}



