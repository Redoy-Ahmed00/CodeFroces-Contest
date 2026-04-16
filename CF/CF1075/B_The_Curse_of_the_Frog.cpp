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
using int64 = long long;
using i128 = __int128_t;

void solve()
{
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i] >> c[i];

    i128 max_possible = 0;
    for (int i = 0; i < n; i++)
    {
        i128 slope = (i128)b[i] * a[i] - c[i];
        if (slope > 0)
        {
            max_possible = (i128)x + 1;
            break;
        }
        else 
            max_possible += (i128)(b[i] - 1) * a[i];
    }

    if (max_possible < x)
    {
        cout << -1 << endl;
        return;
    }

    long long lo = 0, hi = (long long)1e18, ans = hi;

    while (lo <= hi)
    {
        long long mid = (lo + hi) / 2;
        i128 total_gain = 0;

        for (int i = 0; i < n; i++)
        {
            i128 uses = (i128)mid * b[i] + (b[i] - 1);
            i128 gain = uses * a[i] - (i128)mid * c[i];
            if (gain > 0) 
                total_gain += gain;
            if (total_gain >= x) 
                break;
        }

        if (total_gain >= x)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }

    cout << ans << endl;
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