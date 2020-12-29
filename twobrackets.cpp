#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        string s;
        cin>>s;
        int gol=0,sq=0,ans=0;

        for(int i=0; i<s.length(); i++){
            if(s[i]=='('){gol++;}

            else if(s[i]==')'){
                if(gol>0)
                    {ans++;
                    gol--;}
                    }

            if(s[i]=='['){sq++;}

            else if(s[i]==']'){

                if(sq>0)
                    {ans++;
                    sq--;}
                    }
            }
        cout<<ans<<endl;
    }

}
