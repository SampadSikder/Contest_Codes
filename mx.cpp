#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int findS(int s)
{
    ll l = 1, r = (s / 2) + 1,sum;

    while (l <= r) {


        ll mid = (l + r) / 2;


        ll sum = mid * (mid + 1) / 2;


        if (sum == s)
            return mid;


        else if (sum > s)
            r = mid - 1;

        else
            l = mid + 1;
    }

    return sum-1;
}


int main()
{
    ll q;
    while(q--){
        ll s;
        ll n = findS(s);
        cout<<n;}


}
