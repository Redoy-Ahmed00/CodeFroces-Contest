#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define nl "\n"
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define rrep(i, a, b) for(int i = (a); i >= (b); i--)

typedef long long ll;
typedef vector <int> vi;
typedef vector <double> vd;
typedef vector <ll> vll;

void solve()
{
    ll n, k, cnt = 0;
    cin >> n >> k;

    ll l = n, r = n; 
    while (l > k)
    {
        l = l / 2;
        r = (r + 1) / 2;
        cnt++;
    }

    if (l <= k && k <= r)
        cout << cnt << '\n';
    else
        cout << -1 << '\n';

}

int main ()
{
    optimize();
              
    int t = 1;
    cin >> t;

    while(t--)
        solve();
        
    return 0;
}