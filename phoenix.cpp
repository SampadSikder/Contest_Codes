#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ll n,i,flag=0;
	cin>>n;
	
	for(i=1 ; i<n-1; i++){
		if(n%i == 0) flag++;
	}
	
	cout<<flag<<endl;
}
	
