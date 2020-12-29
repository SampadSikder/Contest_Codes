#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	ll i,n,q;

	cin>>n;
	ll a[n];
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
	cin>>q;
	ll b[q],cnt[q];

	for(i=0;i<q;i++)
		{
			cin>>b[i];
		}
	memset(cnt, 0, n*sizeof(cnt[0]));

  	int mx = a[0];
  	for (i = 1; i < q; i++)
  		 {
    		if (a[i] > mx)
      		mx = a[i];
  		 }
	for (i = 0; i < q; i++)
	     cnt[a[i]]++ ;

	for(i=0;i<q;i++)
		{
			cout<<cnt[i]+1<<" ";
		}

}
