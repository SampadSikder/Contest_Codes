#include<bits/stdc++.h>
typedef long long ll;

using namespace std;
int binarySearch(int arr[], int l, int r, int key)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] > key)
            return binarySearch(arr, l, mid - 1, key);

        return binarySearch(arr, mid + 1, r, key);
    }


    return -1;
}

int main(){
    ll n,i,q;
    cin>>n;

    int a[n],b[n];

    sort(a,a+n);

    for(i=1;i<=n;i++)cin>>a[i];
    for(i=1;i<=n;i++)b[i]=a[i];

    cin>>q;
    ll cnt[q]={0};

    while(q--){
        ll x,y,src;

        cin>>x;
        y=a[x];

        src=binarySearch(b, 0, n-1, y);

        for(i=0;i<q;i++){if(src)cnt[i]++;}
        }
        for(i=0;i<q;i++){cout<<cnt[i];}

}
