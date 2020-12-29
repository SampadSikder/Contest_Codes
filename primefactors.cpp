#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void primeFactors(int n)
{


}

int main()
{
    ll n,i;
    cin>>n;

    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n/2;
    }


    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {

        while (n % i == 0)
        {
            cout << i << " ";
            n = n/i;
        }
    }
        if (n > 2)
        cout << n << " ";

    return 0;
}
